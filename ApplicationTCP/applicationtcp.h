#ifndef APPLICATIONTCP_H
#define APPLICATIONTCP_H

#include <QWidget>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui {
class ApplicationTCP;
}
QT_END_NAMESPACE

class ApplicationTCP : public QWidget
{
    Q_OBJECT

public:
    explicit ApplicationTCP(QWidget *parent = nullptr);
    ~ApplicationTCP() override;

private slots:
    void on_pushButtonConnexion_clicked();

    void on_pushButtonEnvoyer_clicked();

private:
    Ui::ApplicationTCP *ui;
    QTcpSocket *socket;

private slots:
    void onQTcpSocket_Connected();
    void onQTcpSocket_Disconnected();
    void onQTcpSocket_ReadyRead();
    void onQTcpSocket_ErrorOccurred(QAbstractSocket::SocketError _socketError);
};
#endif // APPLICATIONTCP_H
