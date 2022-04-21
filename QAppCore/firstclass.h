#ifndef FIRSTCLASS_H
#define FIRSTCLASS_H

#include <QObject>

class FirstClass : public QObject
{
    Q_OBJECT
public:
    explicit FirstClass(QObject *parent = nullptr);
    int add(int x,int y);
signals:

};

#endif // FIRSTCLASS_H
