#include "databasemodule.h"

dataBaseModule::dataBaseModule()
{

}

dataBaseModule::dataBaseModule(QString name){
    this->moduleName =  name;
}

void dataBaseModule::request(QString Module, int requestType, int data){

    std::cout<<"emit signal from dataBaseModule, data: "<<data<<std::endl;
    emit requestSignal(moduleName, Module, requestType,data);

}

void dataBaseModule::onRequestReceive(QString sourceModule, QString targetModule, int requestType, int data){

    if(targetModule == "dataBaseModule"){
        switch (requestType) {
        case 0:{
            std::cout<<"request from: "<< sourceModule.data()<<", request type = "<<requestType<<", data: "<<data<<std::endl;
            break;
        }
        case 1:{
            std::cout<<"request from: "<< sourceModule.data()<<", request type = "<<requestType<<", data: "<<data<<std::endl;
            break;
        }
        default: break;

        }
    }
    else{

    }
}
