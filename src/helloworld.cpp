//
// Created by fredrik on 2019-04-08.
//

#include "helloworld.h"

Helloworld::Helloworld(QObject *parent) : QObject(parent) {}


QString Helloworld::getMessage() {
    return "Hello World from c++";
}