#include "customclass.h"

CustomClass::CustomClass(QObject *parent) : QObject(parent)
{

    //Initialize property here


}

QString CustomClass::property() const
{
    return m_property ;
}

void CustomClass::setProperty(const QString value)
{
    if(m_property != value){

        m_property = value ;
        emit propertyChanged();

    }
}



