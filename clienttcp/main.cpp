#include "applicationtcp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    applicationtcp w;
    w.show();
    return QApplication::exec();
}
