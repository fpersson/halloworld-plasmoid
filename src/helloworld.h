//
// Created by fredrik on 2019-04-08.
//

#ifndef HELLOWORLD_PLASMOID_HELLOWORLD_H
#define HELLOWORLD_PLASMOID_HELLOWORLD_H


#include <QtCore/QObject>

class Helloworld : public QObject {
    Q_OBJECT
    Q_PROPERTY(QString getMessage READ getMessage)
public:
    explicit Helloworld(QObject *parent = 0);

public Q_SLOTS:
    QString getMessage();
};


#endif //HELLOWORLD_PLASMOID_HELLOWORLD_H
