#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>

#include "tipo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

public slots:
    void registra();
    void limp();




private slots:


    void on_PBlistar_clicked();

    void on_actionAcerca_de_triggered();

    void on_infinalizar_triggered();

private:
    Ui::Principal *ui;
    QList<Tipo*> m_tipo;

    void inicializarDatos();
    void inicializarWidgets();




};
#endif // PRINCIPAL_H
