
#include "tcpclient.h"
#include <QCoreApplication>
#include <QObject>
#include <QTcpSocket>
#include <qtcpserver.h>
#include <QAbstractSocket>
#include <QDebug>
#include <QInputDialog>
#include <QApplication>
#include <iostream>
#include <sstream>
#include <string>
#include <QtWidgets>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    TcpClient client;

    if (argc >= 3)
        client.firstConnect(argv[1], atoi(argv[2]));

    return a.exec();
}
