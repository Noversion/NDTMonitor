#-------------------------------------------------
#
# Project created by QtCreator 2023-07-26T10:51:17
#
#-------------------------------------------------

QT       += core gui
QT         +=network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NDTMonitor_QT
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
        menubar.cpp \
        mytcpserver.cpp \
        playbacksettingblk.cpp \
        serversettingblk.cpp \
        up_wd.cpp \
        viewsettingblk.cpp

HEADERS += \
        mainwindow.h \
        menubar.h \
        mytcpserver.h \
        playbacksettingblk.h \
        serversettingblk.h \
        up_wd.h \
        viewsettingblk.h

FORMS += \
        mainwindow.ui \
        playbacksettingblk.ui \
        serversettingblk.ui \
        up_wd.ui \
        viewsettingblk.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Sidescan.qml \
    SidescanForm.ui.qml

RESOURCES += \
    siadescan.qrc
