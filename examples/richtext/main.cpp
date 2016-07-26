#include <QtCore>
#include "xlsxdocument.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"
#include "xlsxformat.h"
QTXLSX_USE_NAMESPACE
int main()
{
    //![0]
    Document xlsx;
    //![0]

    //![1]
    Format blue;
    blue.setFontColor(Qt::blue);
    Format red;
    red.setFontColor(Qt::red);
    red.setFontSize(15);
    Format bold;
    bold.setFontBold(true);

    RichString rich;
    rich.addFragment("Hello ", blue);
    rich.addFragment("Qt ", red);
    rich.addFragment("Xlsx", bold);
    xlsx.write("B2", rich);

    xlsx.workbook()->setHtmlToRichStringEnabled(true);
    xlsx.write("B4", "<b>Hello</b> <font color=\"red\">Qt</font> <i>Xlsx</i>");

    xlsx.write("B6", "<font color=\"red\"><b><u><i>Qt Xlsx</i></u></b></font>");

    //![1]

    //![2]
    xlsx.saveAs("Test1.xlsx");
    //![2]

    Document("Test1.xlsx");
    xlsx.saveAs("Test2.xlsx");

    return 0;
}
