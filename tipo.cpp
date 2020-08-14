#include "tipo.h"

Tipo::Tipo(QObject *parent) : QObject(parent)
{
    m_codigo = 0;
    m_nombre = "";

}

Tipo::Tipo(int codigo, QString nombre)
{
    m_codigo = codigo;
    m_nombre = nombre;

}

int Tipo::codigo() const
{
    return m_codigo;
}



QString Tipo::nombre() const
{
    return m_nombre;
}


