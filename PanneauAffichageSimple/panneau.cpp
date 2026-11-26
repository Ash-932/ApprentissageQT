#include "panneau.h"
#include "ui_panneau.h"

Panneau::Panneau(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Panneau)
{
    socketClient = new QUdpSocket;
    ui->setupUi(this);
    if (socketClient->bind(45454, QUdpSocket::ShareAddress)) {
        connect(socketClient, &QUdpSocket::readyRead, this, &Panneau::RecevoirMessage);
        qDebug() << "Client prêt à recevoir des messages sur le port 45454";
    } else {
        qDebug() << "Erreur de liaison du client au port 45454";
    }
}

Panneau::~Panneau()
{
    delete ui;
    delete[] socketClient;
}

void Panneau::RecevoirMessage()
{
    while (socketClient->hasPendingDatagrams()) {
        QByteArray buffer;
        buffer.resize(socketClient->pendingDatagramSize());
        socketClient->readDatagram(buffer.data(), buffer.size());
        ui->textEditInformation->append(QString::fromUtf8(buffer));
    }
}


