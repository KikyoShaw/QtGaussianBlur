#include "QtGaussianBlur.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtGaussianBlur w;
    w.show();
    return a.exec();
}
