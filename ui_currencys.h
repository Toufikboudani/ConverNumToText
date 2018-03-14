/********************************************************************************
** Form generated from reading UI file 'currencys.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURRENCYS_H
#define UI_CURRENCYS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mylabelwarningtimer.h"

QT_BEGIN_NAMESPACE

class Ui_Currencys
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonNewContry;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    MyLabelWarningTimer *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Restore;
    QPushButton *pushButton_Save;
    QPushButton *pushButtonCancel;

    void setupUi(QWidget *Currencys)
    {
        if (Currencys->objectName().isEmpty())
            Currencys->setObjectName(QStringLiteral("Currencys"));
        Currencys->resize(1000, 564);
        verticalLayout = new QVBoxLayout(Currencys);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButtonNewContry = new QPushButton(Currencys);
        pushButtonNewContry->setObjectName(QStringLiteral("pushButtonNewContry"));
        pushButtonNewContry->setMinimumSize(QSize(130, 35));
        QPalette palette;
        QBrush brush(QColor(0, 85, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pushButtonNewContry->setPalette(palette);
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        pushButtonNewContry->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonNewContry->setIcon(icon);
        pushButtonNewContry->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(pushButtonNewContry);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        tableView = new QTableView(Currencys);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setMinimumSize(QSize(80, 0));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        tableView->setPalette(palette1);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        tableView->setFont(font1);

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new MyLabelWarningTimer(Currencys);
        label->setObjectName(QStringLiteral("label"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        label->setPalette(palette2);
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_Restore = new QPushButton(Currencys);
        pushButton_Restore->setObjectName(QStringLiteral("pushButton_Restore"));
        pushButton_Restore->setMinimumSize(QSize(80, 30));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pushButton_Restore->setPalette(palette3);
        pushButton_Restore->setFont(font2);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/RestoreDefaults.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Restore->setIcon(icon1);
        pushButton_Restore->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButton_Restore);

        pushButton_Save = new QPushButton(Currencys);
        pushButton_Save->setObjectName(QStringLiteral("pushButton_Save"));
        pushButton_Save->setMinimumSize(QSize(80, 30));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pushButton_Save->setPalette(palette4);
        pushButton_Save->setFont(font2);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/Save2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Save->setIcon(icon2);
        pushButton_Save->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButton_Save);

        pushButtonCancel = new QPushButton(Currencys);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setMinimumSize(QSize(80, 30));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pushButtonCancel->setPalette(palette5);
        pushButtonCancel->setFont(font2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonCancel->setIcon(icon3);
        pushButtonCancel->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButtonCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Currencys);

        QMetaObject::connectSlotsByName(Currencys);
    } // setupUi

    void retranslateUi(QWidget *Currencys)
    {
        Currencys->setWindowTitle(QApplication::translate("Currencys", " Country", 0));
        pushButtonNewContry->setText(QApplication::translate("Currencys", "New Country", 0));
        label->setText(QString());
        pushButton_Restore->setText(QApplication::translate("Currencys", "Restore Defaults", 0));
        pushButton_Save->setText(QApplication::translate("Currencys", "Save", 0));
        pushButtonCancel->setText(QApplication::translate("Currencys", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Currencys: public Ui_Currencys {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRENCYS_H
