/********************************************************************************
** Form generated from reading UI file 'dialog_change_city.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CHANGE_CITY_H
#define UI_DIALOG_CHANGE_CITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Change_City
{
public:
    QPushButton *pushButton;
    QComboBox *comboBox;

    void setupUi(QDialog *Dialog_Change_City)
    {
        if (Dialog_Change_City->objectName().isEmpty())
            Dialog_Change_City->setObjectName(QString::fromUtf8("Dialog_Change_City"));
        Dialog_Change_City->resize(453, 131);
        pushButton = new QPushButton(Dialog_Change_City);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 80, 51, 23));
        comboBox = new QComboBox(Dialog_Change_City);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(40, 40, 371, 22));
        comboBox->setEditable(true);

        retranslateUi(Dialog_Change_City);

        QMetaObject::connectSlotsByName(Dialog_Change_City);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Change_City)
    {
        Dialog_Change_City->setWindowTitle(QApplication::translate("Dialog_Change_City", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Dialog_Change_City", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Change_City: public Ui_Dialog_Change_City {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CHANGE_CITY_H
