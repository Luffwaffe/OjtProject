#include "communicationmodule.h"

communicationModule::communicationModule()
{

}

communicationModule::communicationModule(QString name){
    this->moduleName =  name;
}

void communicationModule::request(QString Module, int requestType, int data){

    std::cout<<"emit signal from communicationModule, data: "<<data<<std::endl;
    emit requestSignal(moduleName, Module, requestType,data);

}

void communicationModule::onRequestReceive(QString sourceModule, QString targetModule, int requestType, int data){

    if(targetModule == "communicationModule"){
        switch (requestType) {
        case 0:{
            std::cout<<"request from: "<<(sourceModule.data())<<", request type = "<<requestType<<", data: "<<data<<std::endl;
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
