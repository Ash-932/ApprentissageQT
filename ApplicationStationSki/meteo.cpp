#include "meteo.h"
#include "ui_meteo.h"

Meteo::Meteo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Meteo),
    datagram(QByteArray(),
    QHostAddress::Broadcast, 45454)


{
    ui->setupUi(this);
}

Meteo::~Meteo()
{
    delete ui;
}

void Meteo::on_pushButtonAjouter_clicked()
{

}

void Meteo::on_pushButtonAlerte_clicked()
{

}

void Meteo::on_pushButtonDiffusion_clicked()
{
ui->timerInformation
}

void Meteo::on_pushButtonSupprimer_clicked()
{

}

void Meteo::on_pushButtonModifierMeteo_clicked()
{
    QByteArray buffer;
    QDataStream out(&buffer, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_0);
    out << 'M' << ui->lineEditMeteo->text();
    EnvoyerDatagram(buffer);
}

void Meteo::onTimerInformation_timeout()
{

}

void Meteo::onTimerHeure_timeout()
{
    QTime heure = QTime::currentTime(); // donne l’heure courante
    heure.toString("HH:mm"); // retourne une Qstring contenant l’heure au format HH:m
}

void Meteo::LancerTimerHeure()
{

}

void Meteo::EnvoyerDatagram(const QByteArray &data )
{
    datagram.setData(data); // Configure les données à envoyer
    if (socketServeur->writeDatagram(datagram) == -1) {
        qDebug() << "Erreur lors de l'envoi du datagram :" << socketServeur->errorString();
    } else {
        qDebug() << "Datagram envoyé avec succès : " << data;
    }
}

