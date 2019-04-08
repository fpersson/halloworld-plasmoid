//
// Created by fredrik on 2019-04-08.
//

#include <QtQml>
#include "plugin.h"
#include "helloworld.h"


void Plugin::registerTypes(const char *uri) {
    qmlRegisterType<Helloworld>("Helloworld", 1, 0, "Helloworld");
}
