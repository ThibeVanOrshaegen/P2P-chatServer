
#include "tcpclient.h"
#include <QCoreApplication>
#include <QObject>
#include <QTcpSocket>
#include <qtcpserver.h>
#include <QAbstractSocket>
#include <QDebug>
#include <QInputDialog>
#include <QApplication>
#include <QtWidgets>
#include "jsonparser.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if (argc >= 2){
        QString nickname;
        nickname = argv[1];
        TcpClient client(nullptr,nickname);
        if (argc >= 4)
            client.firstConnect(argv[2], atoi(argv[3]));
    }
    return a.exec();
}
