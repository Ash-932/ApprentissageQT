/********************************************************************************
** Form generated from reading UI file 'meteo.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METEO_H
#define UI_METEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Meteo
{
public:
    QTextEdit *textEditInofrmation;
    QPushButton *pushButtonAjouter;
    QListWidget *listWidgetMessage;
    QTextEdit *textEdit_2;
    QPushButton *pushButtonAlerte;
    QLineEdit *lineEditMeteo;
    QPushButton *pushButtonDiffusion;
    QPushButton *pushButtonSupprimer;
    QPushButton *pushButtonModifier;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *Meteo)
    {
        if (Meteo->objectName().isEmpty())
            Meteo->setObjectName("Meteo");
        Meteo->resize(793, 613);
        textEditInofrmation = new QTextEdit(Meteo);
        textEditInofrmation->setObjectName("textEditInofrmation");
        textEditInofrmation->setGeometry(QRect(10, 40, 381, 161));
        pushButtonAjouter = new QPushButton(Meteo);
        pushButtonAjouter->setObjectName("pushButtonAjouter");
        pushButtonAjouter->setGeometry(QRect(10, 210, 381, 23));
        listWidgetMessage = new QListWidget(Meteo);
        new QListWidgetItem(listWidgetMessage);
        new QListWidgetItem(listWidgetMessage);
        listWidgetMessage->setObjectName("listWidgetMessage");
        listWidgetMessage->setGeometry(QRect(400, 40, 381, 441));
        textEdit_2 = new QTextEdit(Meteo);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(10, 270, 381, 211));
        pushButtonAlerte = new QPushButton(Meteo);
        pushButtonAlerte->setObjectName("pushButtonAlerte");
        pushButtonAlerte->setGeometry(QRect(10, 490, 381, 23));
        lineEditMeteo = new QLineEdit(Meteo);
        lineEditMeteo->setObjectName("lineEditMeteo");
        lineEditMeteo->setGeometry(QRect(10, 550, 381, 22));
        pushButtonDiffusion = new QPushButton(Meteo);
        pushButtonDiffusion->setObjectName("pushButtonDiffusion");
        pushButtonDiffusion->setGeometry(QRect(10, 580, 771, 23));
        pushButtonSupprimer = new QPushButton(Meteo);
        pushButtonSupprimer->setObjectName("pushButtonSupprimer");
        pushButtonSupprimer->setGeometry(QRect(400, 490, 381, 23));
        pushButtonModifier = new QPushButton(Meteo);
        pushButtonModifier->setObjectName("pushButtonModifier");
        pushButtonModifier->setGeometry(QRect(400, 550, 381, 23));
        label = new QLabel(Meteo);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 201, 16));
        label_2 = new QLabel(Meteo);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 250, 201, 16));
        label_3 = new QLabel(Meteo);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(410, 20, 291, 16));
        label_4 = new QLabel(Meteo);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 530, 201, 16));

        retranslateUi(Meteo);

        QMetaObject::connectSlotsByName(Meteo);
    } // setupUi

    void retranslateUi(QWidget *Meteo)
    {
        Meteo->setWindowTitle(QCoreApplication::translate("Meteo", "Meteo", nullptr));
        pushButtonAjouter->setText(QCoreApplication::translate("Meteo", "Ajouter un message", nullptr));

        const bool __sortingEnabled = listWidgetMessage->isSortingEnabled();
        listWidgetMessage->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidgetMessage->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("Meteo", "Toutes les pistes sont ouvertes", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidgetMessage->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("Meteo", "Ce soir descente aux flambeaux", nullptr));
        listWidgetMessage->setSortingEnabled(__sortingEnabled);

        textEdit_2->setHtml(QCoreApplication::translate("Meteo", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Il y a du brouillard, soyez prudent.</p></body></html>", nullptr));
        pushButtonAlerte->setText(QCoreApplication::translate("Meteo", "Cr\303\251er une alerte", nullptr));
        lineEditMeteo->setText(QCoreApplication::translate("Meteo", "Il fait -2\302\260", nullptr));
        pushButtonDiffusion->setText(QCoreApplication::translate("Meteo", "Lancer la diffusion", nullptr));
        pushButtonSupprimer->setText(QCoreApplication::translate("Meteo", "Supprimer un message", nullptr));
        pushButtonModifier->setText(QCoreApplication::translate("Meteo", "Modifier le bulletin m\303\251t\303\251o", nullptr));
        label->setText(QCoreApplication::translate("Meteo", "Message d'information :", nullptr));
        label_2->setText(QCoreApplication::translate("Meteo", "Message d'alerte :", nullptr));
        label_3->setText(QCoreApplication::translate("Meteo", "Liste des messages en cours de diffusion :", nullptr));
        label_4->setText(QCoreApplication::translate("Meteo", "Bulletin m\303\251t\303\251o :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Meteo: public Ui_Meteo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METEO_H
