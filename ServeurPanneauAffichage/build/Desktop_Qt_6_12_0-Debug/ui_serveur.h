/********************************************************************************
** Form generated from reading UI file 'serveur.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVEUR_H
#define UI_SERVEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Serveur
{
public:
    QLabel *label;
    QTextEdit *textEditInformation;
    QPushButton *pushButtonMessage;
    QTextEdit *textEditAlerte;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEditMeteo;
    QLabel *label_4;
    QListWidget *listWidgetMessage;
    QPushButton *pushButtonSupprimer;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Serveur)
    {
        if (Serveur->objectName().isEmpty())
            Serveur->setObjectName("Serveur");
        Serveur->resize(800, 600);
        Serveur->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(Serveur);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 134, 16));
        textEditInformation = new QTextEdit(Serveur);
        textEditInformation->setObjectName("textEditInformation");
        textEditInformation->setGeometry(QRect(10, 30, 301, 131));
        pushButtonMessage = new QPushButton(Serveur);
        pushButtonMessage->setObjectName("pushButtonMessage");
        pushButtonMessage->setGeometry(QRect(9, 170, 301, 23));
        textEditAlerte = new QTextEdit(Serveur);
        textEditAlerte->setObjectName("textEditAlerte");
        textEditAlerte->setGeometry(QRect(10, 220, 301, 101));
        pushButton_2 = new QPushButton(Serveur);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 330, 301, 23));
        label_2 = new QLabel(Serveur);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 200, 131, 16));
        label_3 = new QLabel(Serveur);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 360, 93, 16));
        lineEditMeteo = new QLineEdit(Serveur);
        lineEditMeteo->setObjectName("lineEditMeteo");
        lineEditMeteo->setGeometry(QRect(125, 527, 125, 22));
        label_4 = new QLabel(Serveur);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(320, 10, 221, 16));
        listWidgetMessage = new QListWidget(Serveur);
        listWidgetMessage->setObjectName("listWidgetMessage");
        listWidgetMessage->setGeometry(QRect(320, 30, 271, 291));
        pushButtonSupprimer = new QPushButton(Serveur);
        pushButtonSupprimer->setObjectName("pushButtonSupprimer");
        pushButtonSupprimer->setGeometry(QRect(320, 330, 271, 23));
        lineEdit = new QLineEdit(Serveur);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 380, 301, 22));
        pushButton = new QPushButton(Serveur);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 380, 271, 23));
        pushButton_3 = new QPushButton(Serveur);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 410, 581, 23));

        retranslateUi(Serveur);

        QMetaObject::connectSlotsByName(Serveur);
    } // setupUi

    void retranslateUi(QWidget *Serveur)
    {
        Serveur->setWindowTitle(QCoreApplication::translate("Serveur", "Serveur pour les panneaux d'affichage", nullptr));
        label->setText(QCoreApplication::translate("Serveur", "Message d'information", nullptr));
        pushButtonMessage->setText(QCoreApplication::translate("Serveur", "Ajouter un message", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Serveur", "Cr\303\251er une alerte", nullptr));
        label_2->setText(QCoreApplication::translate("Serveur", " Message d'alerte :", nullptr));
        label_3->setText(QCoreApplication::translate("Serveur", "Bulletin m\303\251t\303\251o :", nullptr));
        label_4->setText(QCoreApplication::translate("Serveur", "Liste des messages en de diffusion :", nullptr));
        pushButtonSupprimer->setText(QCoreApplication::translate("Serveur", "Supprimer un message", nullptr));
        lineEdit->setText(QCoreApplication::translate("Serveur", " Modifier le bulletin m\303\251t\303\251o ", nullptr));
        pushButton->setText(QCoreApplication::translate("Serveur", "Modifier le bulletin m\303\251t\303\251o", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Serveur", "Lancer la diffusion ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Serveur: public Ui_Serveur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVEUR_H
