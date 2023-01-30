#ifndef IBASEMODULE_H
#define IBASEMODULE_H

#include <QObject>
#include<iostream>
#include<QtDebug>
#include<QThread>

class IBaseModule : public QObject
{
    Q_OBJECT
public:
    explicit IBaseModule(QObject *parent = nullptr);

    virtual void connect(IBaseModule* targetModule);
    virtual void request(QString targetModule, int requestType, int data=0);
    virtual void response(QString targetModule, int requestType, int data=0);
    virtual void start();
protected:
    QString moduleName = "IBaseModule";

private:
    virtual void run();
    QThread mainLoop;

signals:
    void requestSignal(QString sourceModule, QString targetModule, int requestType, int data);
    void responseSignal(QString sourceModule, QString targetModule, int requestType, int data);

public slots:
    virtual void onRequestReceive(QString sourceModule, QString targetModule, int requestType, int data) = 0;
    virtual void onResponseReceive(QString sourceModule, QString targetModule, int requestType, int data) = 0;
};

#endif // IBASEMODULE_H
