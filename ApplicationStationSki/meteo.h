#ifndef METEO_H
#define METEO_H

#include <QWidget>
#include <QUdpSocket>
#include <QNetworkDatagram>
#include <QTimer>
#include <QByteArray>

QT_BEGIN_NAMESPACE
namespace Ui {
class Meteo;
}
QT_END_NAMESPACE

class Meteo : public QWidget
{
    Q_OBJECT

public:
    explicit Meteo(QWidget *parent = nullptr);
    ~Meteo() override;
    
private slots:
    void on_pushButtonAjouter_clicked();
    void on_pushButtonAlerte_clicked();
    void on_pushButtonDiffusion_clicked();
    void on_pushButtonSupprimer_clicked();
    void on_pushButtonModifierMeteo_clicked();
    void onTimerInformation_timeout();
    void onTimerHeure_timeout();

    
private:
    void LancerTimerHeure();
    void EnvoyerDatagram(const QByteArray &data);
    Ui::Meteo *ui;
    int indexMessage;
    bool alerte;
    bool alternanceAlerte;
    QUdpSocket *socketServeur;
    QNetworkDatagram datagram;
    QTimer timerInformation;
    QTimer timerHeure;
};
#endif // METEO_H
