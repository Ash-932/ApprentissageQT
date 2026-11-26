#include "serveur.h"
#include "ui_serveur.h"

Serveur::Serveur(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Serveur)
{
    ui->setupUi(this);
}

Serveur::~Serveur()
{
    delete ui;
}

void Serveur::on_PushButtonDiffuser_clicked()
{

}

void Serveur::on_PushButtonAjouterMessage_clicked()
{

}

void Serveur::on_PushButtonCreerAlerte_clicked()
{

}

void Serveur::on_PushButtonSupprimerMessage_clicked()
{

}

void Serveur::on_PushButtonModifierMeteo_clicked()
{

}

void Serveur::onTimerinformation_timeout()
{

}

void Serveur::onTimerHeure_timeout()
{

}

void Serveur::LancerTimerHeure()
{

}

void Serveur::EnvoyerDatagram(const QByteArray &data)
{

}
