#ifndef JSON_H
#define JSON_H

#include <QJsonObject>
#include <QJsonDocument>
#include <QString>
QString createJSON(QString id, QString ip, quint16 port, QString message) {
    //quint16 localPort() const;
    //QHostAddress localAddress() const;
    QDateTime date = QDateTime::currentDateTime();
    QJsonObject jsonObj;
    jsonObj["id"] = id;
    jsonObj["ip"] = ip;
    jsonObj["port"] = port;
    jsonObj["timestamp"] = date.toString("dd/MM/yyyy hh:mm");
    jsonObj["message"] = message;

    QJsonDocument jsonDoc(jsonObj);
    return jsonDoc.toJson(QJsonDocument::Compact);
}

QString JSONtoMessage(QString Json){
    return Json;
}
#endif // JSON_H
