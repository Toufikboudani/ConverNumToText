/********************************************************************************
** Form generated from reading UI file 'qwidgetimage_border.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWIDGETIMAGE_BORDER_H
#define UI_QWIDGETIMAGE_BORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWidgetImage_border
{
public:

    void setupUi(QWidget *QWidgetImage_border)
    {
        if (QWidgetImage_border->objectName().isEmpty())
            QWidgetImage_border->setObjectName(QStringLiteral("QWidgetImage_border"));
        QWidgetImage_border->resize(400, 300);

        retranslateUi(QWidgetImage_border);

        QMetaObject::connectSlotsByName(QWidgetImage_border);
    } // setupUi

    void retranslateUi(QWidget *QWidgetImage_border)
    {
        QWidgetImage_border->setWindowTitle(QApplication::translate("QWidgetImage_border", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class QWidgetImage_border: public Ui_QWidgetImage_border {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWIDGETIMAGE_BORDER_H
