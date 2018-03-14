#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "convernumtotext.h"
namespace Ui {
class MainWindow;
}
class MyQStandardItemModel;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void ReadConty();
    void ReadConty2();
public slots:

private slots:
    void on_actionAbout_triggered();
    void on_comboBox_currentIndexChanged(int index);
    void on_lineEditNumber_returnPressed();
    void on_pushButton_clicked();

    void on_Santim_clicked();

    void on_CurrencySave_clicked();

    void on_ADDCountry_clicked();

    void on_actionConvert_triggered();

    void on_actionExit_triggered();

protected:
 void closeEvent(QCloseEvent *);

private:
    Ui::MainWindow *ui;
     MyQStandardItemModel * Model;

};


#endif // MAINWINDOW_H
