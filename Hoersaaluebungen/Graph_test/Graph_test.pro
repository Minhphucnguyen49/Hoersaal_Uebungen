QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_test_1.cpp \
../Graph/Graph.cpp

HEADERS += ../Graph/Graph.h

INCLUDEPATH += ../Graph
