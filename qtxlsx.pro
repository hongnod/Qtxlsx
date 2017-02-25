#-------------------------------------------------
#
# Project created by QtCreator 2016-05-11T18:48:13
#
#-------------------------------------------------
CONFIG(debug, debug|release){
TARGET = qtxlsxd
}else{
TARGET = qtxlsx
}

TEMPLATE = lib
QT += core gui

DEFINES += QTXLSX_LIBRARY QT_DEPRECATED_WARNINGS



SOURCES += \
    xlsxabstractooxmlfile.cpp \
    xlsxabstractsheet.cpp \
    xlsxcell.cpp \
    xlsxcellformula.cpp \
    xlsxcellrange.cpp \
    xlsxcellreference.cpp \
    xlsxchart.cpp \
    xlsxchartsheet.cpp \
    xlsxcolor.cpp \
    xlsxconditionalformatting.cpp \
    xlsxcontenttypes.cpp \
    xlsxdatavalidation.cpp \
    xlsxdocpropsapp.cpp \
    xlsxdocpropscore.cpp \
    xlsxdocument.cpp \
    xlsxdrawing.cpp \
    xlsxdrawinganchor.cpp \
    xlsxformat.cpp \
    xlsxmediafile.cpp \
    xlsxnumformatparser.cpp \
    xlsxrelationships.cpp \
    xlsxrichstring.cpp \
    xlsxsharedstrings.cpp \
    xlsxsimpleooxmlfile.cpp \
    xlsxstyles.cpp \
    xlsxtheme.cpp \
    xlsxutility.cpp \
    xlsxworkbook.cpp \
    xlsxworksheet.cpp \
    xlsxzipreader.cpp \
    xlsxzipwriter.cpp \
    xlsxmarker.cpp

HEADERS +=\
    xlsxabstractooxmlfile.h \
    xlsxabstractooxmlfile_p.h \
    xlsxabstractsheet.h \
    xlsxabstractsheet_p.h \
    xlsxcell.h \
    xlsxcell_p.h \
    xlsxcellformula.h \
    xlsxcellformula_p.h \
    xlsxcellrange.h \
    xlsxcellreference.h \
    xlsxchart.h \
    xlsxchart_p.h \
    xlsxchartsheet.h \
    xlsxchartsheet_p.h \
    xlsxcolor_p.h \
    xlsxconditionalformatting.h \
    xlsxconditionalformatting_p.h \
    xlsxcontenttypes_p.h \
    xlsxdatavalidation.h \
    xlsxdatavalidation_p.h \
    xlsxdocpropsapp_p.h \
    xlsxdocpropscore_p.h \
    xlsxdocument.h \
    xlsxdocument_p.h \
    xlsxdrawing_p.h \
    xlsxdrawinganchor_p.h \
    xlsxformat.h \
    xlsxformat_p.h \
    xlsxglobal.h \
    xlsxmediafile_p.h \
    xlsxnumformatparser_p.h \
    xlsxrelationships_p.h \
    xlsxrichstring.h \
    xlsxrichstring_p.h \
    xlsxsharedstrings_p.h \
    xlsxsimpleooxmlfile_p.h \
    xlsxstyles_p.h \
    xlsxtheme_p.h \
    xlsxutility_p.h \
    xlsxworkbook.h \
    xlsxworkbook_p.h \
    xlsxworksheet.h \
    xlsxworksheet_p.h \
    xlsxzipreader_p.h \
    xlsxzipwriter_p.h \
    xlsxmarker.h \
    xlsxmarker_p.h

INCLUDEPATH += $$PWD/../QtMiniz/inc \


CONFIG(debug, debug|release){
LIBS += -L$$PWD/../QtMiniz/lib -lqtminizd
}else{
LIBS += -L$$PWD/../QtMiniz/lib -lqtminiz
}

unix {
    target.path = /usr/lib
    INSTALLS += target
}
