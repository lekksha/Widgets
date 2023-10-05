#include <QApplication>
#include "win.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    win Win(0);
    Win.show();
    return a.exec();
}
