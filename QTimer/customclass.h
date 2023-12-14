#ifndef CUSTOMCLASS_H
#define CUSTOMCLASS_H

#include <QObject>

class CustomClass : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString property READ property WRITE setProperty NOTIFY propertyChanged )

public:
    explicit CustomClass(QObject *parent = nullptr);

    QString property () const ;

    void setProperty(const QString value) ;




signals:

    void propertyChanged () ;

private:

    QString m_property ;


};

#endif // CUSTOMCLASS_H
