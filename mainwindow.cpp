#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "DialogAboutt.h"
#include "mywstyle.h"
#include "currencys.h"
#include "write_read_file.h"
#include "myqstandarditemmodel.h"
#include <QDebug>
#include <QSettings>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDoubleValidator *myDblVal = new QDoubleValidator(0, 99999999999999, 2,ui->lineEditNumber->parent());
    ui->lineEditNumber->setValidator(myDblVal);
    ui->lineEditNumber->setMaxLength(15);
    ui->lineEditNumber->setAlignment(Qt::AlignRight);
    ui->lineEditNumber->clear();
    ui->pushButton->setStyleSheet(MyWstyle::StylebuttonOK());
    ui->Santim->setStyleSheet(MyWstyle::StyleQcheckboxSwitch());
      QString color="#45a1fe";

    ui->comboBox->setStyleSheet(MyWstyle::StyleStondare("QComboBox",color,this->font()));
    ui->comboBox_2->setStyleSheet(MyWstyle::StyleStondare("QComboBox",color,this->font()));
    ui->textEdit->setStyleSheet(MyWstyle::StyleStondare("QTextEdit",color,this->font()));
     ui->lineEditNumber->setStyleSheet(MyWstyle::StyleStondare("QLineEdit",color,this->font()));
    ui->groupBox->setStyleSheet(MyWstyle::StyleStondare("QGroupBox",color,this->font()));

      Model=new MyQStandardItemModel(0,Currencys::HaderMax);
      ui->comboBox_2->setModel(Model);
      ui->comboBox_2->setModelColumn(Currencys::Country);

    ReadConty();
    on_Santim_clicked();

    QSettings SettingsCur("MyMainWindow","myapp");
    SettingsCur.beginGroup("MainWindow");
    ui->comboBox_2->setCurrentText(SettingsCur.value("current_Country").toString());
    ui->comboBox->setCurrentText(SettingsCur.value("current_language").toString());
    SettingsCur.endGroup();


}
void MainWindow::ReadConty()
{
       Model->removeRows(0,Model->rowCount());

       QString Read_F;


       Write_Read_File::Read_File("Currency.Cur",Read_F);
       qDebug()<<"Write_Read_File    "<<Read_F;
       if (Read_F.isEmpty()) {
       return;
   }


   QStringList StrRow= Read_F.split("\n", QString::SkipEmptyParts);

       for (int Row = 0; Row < StrRow.size(); ++Row) {
           QStandardItem* itm = new QStandardItem();
           Model->appendRow(itm);
           QStringList datacolumRow_F=StrRow.at(Row).split("*=A@A=*", QString::KeepEmptyParts);
           if (datacolumRow_F.size()<Currencys::HaderMax) {
               return;
           }
           for (int col = 0; col < Currencys::HaderMax; ++col) {
               Model->setData( Model->index(Row,col),datacolumRow_F.at(col));
           }


       }




}




MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_lineEditNumber_returnPressed()
{

}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    QString  Dinar=Model->data(Model->index(ui->comboBox_2->currentIndex(),index+(Currencys::Currency_HomeAR))).toString();
    QString  Centimes=Model->data(Model->index(ui->comboBox_2->currentIndex(),index+(Currencys::Currency_partsAR))).toString();
    ui->textEdit->setText(ConverNumToText::getTextConver(index,ui->lineEditNumber->text().toDouble(),ui->groupBox->isEnabled(),Dinar,Centimes));

}

void MainWindow::on_actionAbout_triggered()
{
    DialogAboutt abo(this);
    abo.setWindowTitle(ui->actionAbout->text());
    abo.exec();

}

void MainWindow::on_pushButton_clicked()
{
    if (Model->rowCount()>0) {
        qDebug()<<ui->comboBox->currentIndex();
        qDebug()<<"Model->rowCount()== "<<Model->rowCount();
        QString  Dinar=Model->data(Model->index(ui->comboBox_2->currentIndex(),ui->comboBox->currentIndex()+(Currencys::Currency_HomeAR))).toString();
        QString  Centimes=Model->data(Model->index(ui->comboBox_2->currentIndex(),ui->comboBox->currentIndex()+(Currencys::Currency_partsAR))).toString();
        ui->textEdit->setText(ConverNumToText::getTextConver(ui->comboBox->currentIndex(),ui->lineEditNumber->text().toDouble(),ui->groupBox->isEnabled(),Dinar,Centimes));

    }
}

void MainWindow::on_Santim_clicked()
{
    if (ui->Santim->isChecked()) {
       ui->groupBox->setEnabled(ui->Santim->isChecked());
    } else {
       ui->groupBox->setEnabled(ui->Santim->isChecked());
    }
 on_pushButton_clicked();
}

void MainWindow::on_CurrencySave_clicked()
{

}

void MainWindow::on_ADDCountry_clicked()
{
    Currencys d(this);
    d.exec();
    ReadConty();
}

void MainWindow::closeEvent(QCloseEvent *)
{
   QSettings SettingsCur("MyMainWindow","myapp");
   SettingsCur.beginGroup("MainWindow");
   SettingsCur.setValue("current_Country",ui->comboBox_2->currentText());
   SettingsCur.setValue("current_language",ui->comboBox->currentText());
   SettingsCur.endGroup();
  }

void MainWindow::on_actionConvert_triggered()
{
  on_ADDCountry_clicked();
}

void MainWindow::on_actionExit_triggered()
{
    close();
}
