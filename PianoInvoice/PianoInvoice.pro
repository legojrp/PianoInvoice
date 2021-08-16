QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../../TimeCpp/time.cpp \
    ../../UserDataHandledCpp/UserDataHandler.cpp \
    autosave.cpp \
    display.cpp \
    emailwindow.cpp \
    main.cpp \
    base.cpp \
    settings.cpp

HEADERS += \
    autosave.h \
    base.h \
    display.h \
    emailwindow.h \
    settings.h

FORMS += \
    base.ui \
    emailwindow.ui \
    settings.ui

#icon stuff

win32:RC_ICONS += icon.ico
 # other stuff
 ... = -Wno-unused-parameter
 QMAKE_CXXFLAGS_WARN_OFF -= -Wunused-parameter

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
