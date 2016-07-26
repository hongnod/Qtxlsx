TARGET = mergecells

INCLUDEPATH += ../../inc
CONFIG(debug, debug|release){
                LIBS += -L../../lib -lqtxlsxd
		}else{
                  LIBS += -L../../lib -lqtxlsx
		}

TARGET = numberformat
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += main.cpp
