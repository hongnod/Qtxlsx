TARGET = mergecells

INCLUDEPATH += ../../inc
CONFIG(debug, debug|release){
                LIBS += -L../../lib -lqtxlsxd
		}else{
                  LIBS += -L../../lib -lqtxlsx
		}

CONFIG   += console
CONFIG   -= app_bundle

SOURCES += main.cpp
