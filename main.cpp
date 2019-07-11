#include "hcce.h"
#include "secondstorey.h"
#include "thirdstorey.h"
#include "variables.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HCCE w;
    w.show();
    return a.exec();
}
