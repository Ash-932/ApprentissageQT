#include "applicationtcp.h"
#include "ui_applicationtcp.h"

ApplicationTCP::ApplicationTCP(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ApplicationTCP)
, socket(new QTcpSocket(this))
{
    ui->setupUi(this);
    connect(socket,&QTcpSocket::connected, this,&ApplicationTCP::onQTcpSocket_Connected);
    connect(socket,&QTcpSocket::disconnected, this,&ApplicationTCP::onQTcpSocket_Disconnected);
    connect(socket,&QTcpSocket::readyRead, this,&ApplicationTCP::onQTcpSocket_ReadyRead);
    connect(socket,&QTcpSocket::errorOccurred, this,&ApplicationTCP::onQTcpSocket_ErrorOccurred);
}
ApplicationTCP::~ApplicationTCP()
{
    delete ui;
}

void ApplicationTCP::on_pushButtonConnexion_clicked()
{
    if(ui->pushButtonConnexion->text()=="Connexion") {
        ui->pushButtonConnexion->setText("Déconnexion");
        QString adresse = ui->lineEditAdresse->text();
        quint16 port = ui->spinBox->value();
        socket->connectToHost(adresse, port);
    } else {
        ui->pushButtonConnexion->setText("Connexion");
        socket->close();
    }
}

void ApplicationTCP::on_pushButtonEnvoyer_clicked()
{

}

void ApplicationTCP::onQTcpSocket_Connected()
{
ui->textEdit->append("Connecté au serveur");
}

void ApplicationTCP::onQTcpSocket_Disconnected()
{
ui->textEdit->append("Déconnecté du serveur");
}

void ApplicationTCP::onQTcpSocket_ReadyRead()
{

}



void ApplicationTCP::onQTcpSocket_ErrorOcurred(QAbstractSocket::SocketError _socketError)
{

}

