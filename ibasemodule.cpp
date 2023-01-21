#include "ibasemodule.h"

IBaseModule::IBaseModule(QObject *parent) : QObject(parent)
{

}

void IBaseModule::conectToSendRequest(IBaseModule *targetModule){
    QObject::connect(this,&IBaseModule::requestSignal,targetModule,&IBaseModule::onRequestReceive);
}
