TEMPLATE = lib
CONFIG -= qt

# No shared library version
CONFIG += plugin


TARGET = customcmdtest

target.path=/mnt/mtd5/robots
INSTALLS += target

DESTDIR = ../lib


SOURCES += \
    main.cpp \
    dob.cpp
#    dob.cpp

HEADERS += \
#    dob.h
    dob.h

