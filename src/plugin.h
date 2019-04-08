//
// Created by fredrik on 2019-04-08.
//

#ifndef HELLOWORLD_PLASMOID_PLUGIN_H
#define HELLOWORLD_PLASMOID_PLUGIN_H

#include <QQmlExtensionPlugin>

class QQmlEngine;
class Plugin : public QQmlExtensionPlugin
{
Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")

public:
    void registerTypes(const char *uri);
};

#endif //HELLOWORLD_PLASMOID_PLUGIN_H
