#include "firstclass.h"

FirstClass::FirstClass(QObject *parent) : QObject(parent)
{

}


int FirstClass::add(int x,int y)
{
    return x+y;
}
