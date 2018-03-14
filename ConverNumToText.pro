#-------------------------------------------------
#
# Project created by QtCreator 2016-11-30T20:53:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ConverNumToText
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialogabout.cpp \
    dialogaboutt.cpp \
    htmlprepara.cpp \
    mylabelwarningtimer.cpp \
    MyLabelWarning.cpp \
    qwidgetimage_border.cpp \
    convernumtotext.cpp \
    mywstyle.cpp \
    write_read_file.cpp \
    currencys.cpp \
    myqstandarditemmodel.cpp \
    fields.cpp

HEADERS  += mainwindow.h \
    dialogabout.h \
    dialogaboutt.h \
    htmlprepara.h \
    mylabelwarningtimer.h \
    MyLabelWarning.h \
    qwidgetimage_border.h \
    convernumtotext.h \
    mywstyle.h \
    write_read_file.h \
    currencys.h \
    myqstandarditemmodel.h \
    fields.h

FORMS    += mainwindow.ui \
    dialogabout.ui \
    dialogaboutt.ui \
    qwidgetimage_border.ui \
    currencys.ui

RESOURCES += \
    images.qrc
win32{
RC_FILE +=ConverNumToText.rc
}

