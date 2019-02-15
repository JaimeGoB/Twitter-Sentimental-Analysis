TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    TweetData.cpp \
    TwitterUser.cpp \
    MadLibbs.cpp

HEADERS += \
    TweetData.h \
    TwitterUser.h \
    MadLibbs.h

DISTFILES += \
    build-Program01-Desktop_Qt_5_11_2_GCC_64bit-Debug/SolvedMadLibbs.txt \
    ../build-Program01-Desktop_Qt_5_11_2_GCC_64bit-Debug/SolvedMadLibbs.txt
