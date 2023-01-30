#include "ibasemodule.h"
#include <unistd.h>

IBaseModule::IBaseModule(QObject *parent) : QObject(parent)
{

}

void IBaseModule::connect(IBaseModule *targetModule){
    QObject::connect(this,&IBaseModule::requestSignal,targetModule,&IBaseModule::onRequestReceive);
    QObject::connect(this,&IBaseModule::responseSignal,targetModule,&IBaseModule::onResponseReceive);
}

void IBaseModule::request(QString targetModule, int requestType, int data){
    qDebug()<<moduleName+" emit request signal, reques type:"<<requestType<<"data:"<<data;
    emit requestSignal(moduleName, targetModule, requestType,data);
}

void IBaseModule::response(QString targetModule, int requestType, int data){
    qDebug()<<moduleName+" emit request signal, reques type:"<<requestType<<"data:"<<data;
    emit responseSignal(moduleName,targetModule, requestType, data);
}

void IBaseModule::start(){
    this->moveToThread(&this->mainLoop);
    QObject::connect(&mainLoop, &QThread::started, this, &IBaseModule::run);
    mainLoop.start();
}

void IBaseModule::run(){
    while (true) {
       qDebug()<<moduleName+" is running";
       usleep(5000000);
    }
}
