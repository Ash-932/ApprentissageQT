#include "applicationtcp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ApplicationTCP w;
    w.show();
    return QApplication::exec();
}
