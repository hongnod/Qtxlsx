TARGET = xlsxwidget
QT += widgets

INCLUDEPATH += ../../inc
CONFIG(debug, debug|release){
                LIBS += -L../../lib -lqtxlsxd
		}else{
                  LIBS += -L../../lib -lqtxlsx
		}


SOURCES += main.cpp \
    xlsxsheetmodel.cpp

HEADERS += \
    xlsxsheetmodel.h \
    xlsxsheetmodel_p.h
