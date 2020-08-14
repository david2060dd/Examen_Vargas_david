#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <QObject>

class Tipo : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int codigo READ codigo)

    Q_PROPERTY(QString nombre READ nombre)

public:
    explicit Tipo(QObject *parent = nullptr);
    Tipo(int codigo, QString nombre);
    // Geters
    int codigo() const;

    QString nombre() const;


signals:

private:
    int m_codigo;

    QString m_nombre;

};

#endif // PRODUCTO_H
