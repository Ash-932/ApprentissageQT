#ifndef SERVEUR_H
#define SERVEUR_H

#include <QWidget>
#include <QUdpSocket>
#include <QNetworkDatagram>
#include <QTimer>
#include <QByteArray>

QT_BEGIN_NAMESPACE
namespace Ui {
class Serveur;
}
QT_END_NAMESPACE

class Serveur : public QWidget
{
    Q_OBJECT

public:
    explicit Serveur(QWidget *parent = nullptr);
    ~Serveur() override;

private slots:
    void on_PushButtonDiffuser_clicked();
    void on_PushButtonAjouterMessage_clicked();
    void on_PushButtonCreerAlerte_clicked();
    void on_PushButtonSupprimerMessage_clicked();
    void on_PushButtonModifierMeteo_clicked();
    void onTimerinformation_timeout();
    void onTimerHeure_timeout();
    void LancerTimerHeure();
    void EnvoyerDatagram(const QByteArray &data);

private:
    Ui::Serveur *ui;   
    int indexMessage;
    bool alerte;
    bool alternanceAlerte;
    QUdpSocket *socketServeur;
    QNetworkDatagram datagram;
    QTimer timerInformation;
    QTimer timerHeure;

};
#endif // SERVEUR_H
