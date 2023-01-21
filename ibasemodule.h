#ifndef IBASEMODULE_H
#define IBASEMODULE_H

#include <QObject>

class IBaseModule : public QObject
{
    Q_OBJECT
public:
    explicit IBaseModule(QObject *parent = nullptr);

    virtual void request(QString Module, int requestType, int data)=0;

    virtual void conectToSendRequest(IBaseModule* targetModule);

protected:
    QString moduleName = "IBaseModule";

signals:
    void requestSignal(QString sourceModule, QString targetModule, int requestType, int data);

public slots:
    virtual void onRequestReceive(QString sourceModule, QString targetModule, int requestType, int data) = 0;
};

#endif // IBASEMODULE_H
