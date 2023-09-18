#include <QCoreApplication>
#include "win.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Win win(0); //? Почему win(0)
    win.show();
    return a.exec();
}
