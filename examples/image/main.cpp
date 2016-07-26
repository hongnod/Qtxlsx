#include <QtGui>
#include "xlsxdocument.h"
QTXLSX_USE_NAMESPACE
int main(int argc, char** argv)
{
    QGuiApplication(argc, argv);

    Document xlsx;
    QImage image(40, 30, QImage::Format_RGB32);
    image.fill(Qt::green);
    for (int i=0; i<10; ++i)
        xlsx.insertImage(10*i, 5, image);
    xlsx.saveAs("Book1.xlsx");

    Document xlsx2("Book1.xlsx");
    xlsx2.saveAs("Book2.xlsx");

    return 0;
}
