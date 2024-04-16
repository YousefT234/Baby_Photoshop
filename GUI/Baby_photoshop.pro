QT += core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bouns.cpp \
    effects_page.cpp \
    elramly_page.cpp \
    filters.cpp \
    main.cpp \
    mainstart.cpp \
    mainwindow.cpp \
    our_team.cpp

HEADERS += \
    bouns.h \
    effects_page.h \
    elramly_page.h \
    filters.h \
    mainstart.h \
    mainwindow.h \
    our_team.h

FORMS += \
    bouns.ui \
    effects_page.ui \
    elramly_page.ui \
    mainstart.ui \
    mainwindow.ui \
    our_team.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
