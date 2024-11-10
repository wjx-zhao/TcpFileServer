#include "tcpfileserver.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TcpFileServer w;
    w.show();

    return a.exec();
}
