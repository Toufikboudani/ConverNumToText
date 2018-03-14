/********************************************************************************
** Form generated from reading UI file 'dialogaboutt.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGABOUTT_H
#define UI_DIALOGABOUTT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "mylabelwarning.h"
#include "qwidgetimage_border.h"

QT_BEGIN_NAMESPACE

class Ui_DialogAboutt
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QWidgetImage_border *widget_imag;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    MyLabelWarning *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QPushButton *pushButton_you;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;

    void setupUi(QDialog *DialogAboutt)
    {
        if (DialogAboutt->objectName().isEmpty())
            DialogAboutt->setObjectName(QStringLiteral("DialogAboutt"));
        DialogAboutt->resize(440, 243);
        DialogAboutt->setMinimumSize(QSize(0, 0));
        DialogAboutt->setMaximumSize(QSize(440, 243));
        verticalLayout_3 = new QVBoxLayout(DialogAboutt);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget_imag = new QWidgetImage_border(DialogAboutt);
        widget_imag->setObjectName(QStringLiteral("widget_imag"));
        widget_imag->setMinimumSize(QSize(150, 150));
        widget_imag->setMaximumSize(QSize(150, 150));

        verticalLayout_2->addWidget(widget_imag);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_6 = new QLabel(DialogAboutt);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        label_5 = new QLabel(DialogAboutt);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_4 = new QLabel(DialogAboutt);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_2 = new QLabel(DialogAboutt);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label = new MyLabelWarning(DialogAboutt);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(250, 0));

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(DialogAboutt);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        pushButton_you = new QPushButton(DialogAboutt);
        pushButton_you->setObjectName(QStringLiteral("pushButton_you"));
        pushButton_you->setMinimumSize(QSize(50, 50));
        pushButton_you->setMaximumSize(QSize(50, 50));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/yot.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_you->setIcon(icon);
        pushButton_you->setIconSize(QSize(35, 35));

        horizontalLayout_2->addWidget(pushButton_you);

        pushButton = new QPushButton(DialogAboutt);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(50, 50));
        pushButton->setMaximumSize(QSize(50, 50));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/fac.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(35, 35));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(DialogAboutt);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout_3);


        retranslateUi(DialogAboutt);

        QMetaObject::connectSlotsByName(DialogAboutt);
    } // setupUi

    void retranslateUi(QDialog *DialogAboutt)
    {
        DialogAboutt->setWindowTitle(QApplication::translate("DialogAboutt", "Dialog", 0));
        label_6->setText(QApplication::translate("DialogAboutt", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">Convert NumToWord  v 1.0.0</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">2017</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("DialogAboutt", "<html><head/><body><p>A special application to </p></body></html>", 0));
        label_4->setText(QApplication::translate("DialogAboutt", "<html><head/><body><p><span style=\" font-weight:600; color:#0055ff;\">ToufikboudaniSoft</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("DialogAboutt", "<html><head/><body><p><span style=\" font-weight:600; color:#0055ff;\">E-mail : </span> toufikboudani@gmail.com</p></body></html>", 0));
        label->setText(QApplication::translate("DialogAboutt", "<html><head/><body><p><a href= \" https://www.facebook.com/ToufikboudaniSoft\"> https://www.facebook.com/ToufikboudaniSoft<span style=\" font-weight:600;\"/></p></a></body></html>", 0));
        label_3->setText(QApplication::translate("DialogAboutt", "<html><head/><body><p><span style=\" font-weight:600;\">Phone : +213774771234 </span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_you->setToolTip(QApplication::translate("DialogAboutt", "<html><head/><body><p><span style=\" text-decoration: underline;\"/><span style=\" text-decoration: underline;\">https://www.youtube.com/channel/UCAbFVl-RB2FT8EzIIm1908g</span></p><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_you->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("DialogAboutt", "<html><head/><body><p><span style=\" text-decoration: underline;\"/><span style=\" text-decoration: underline;\">https://www.facebook.com/ToufikboudaniSoft</span></p><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QString());
        pushButton_2->setText(QApplication::translate("DialogAboutt", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogAboutt: public Ui_DialogAboutt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGABOUTT_H
