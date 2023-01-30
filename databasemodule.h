#ifndef DATABASEMODULE_H
#define DATABASEMODULE_H

#include "ibasemodule.h"
#include <iostream>
#include <string>

class dataBaseModule : public IBaseModule
{
public:
    dataBaseModule();;
    dataBaseModule(QString name);;
    ~dataBaseModule();;

private:

signals:

public slots:
    virtual void onRequestReceive(QString sourceModule, QString targetModule, int requestType, int data);;
    virtual void onResponseReceive(QString sourceModule, QString targetModule, int requestType, int data);
};

#endif // DATABASEMODULE_H
