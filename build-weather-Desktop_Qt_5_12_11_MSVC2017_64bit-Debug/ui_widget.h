/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <define_qlabel/define_qlabel.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_weather_icon;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    DEFINE_QLABEL *label_local_city;
    QLabel *label_city_name;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_real_time_temp;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    DEFINE_QLABEL *label_refresh;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_temp_1;
    QLabel *label_weather_type_1;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_show_message;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(456, 300);
        Widget->setMaximumSize(QSize(456, 300));
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_5 = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, 10, -1);
        label_weather_icon = new QLabel(Widget);
        label_weather_icon->setObjectName(QString::fromUtf8("label_weather_icon"));
        label_weather_icon->setMaximumSize(QSize(260, 240));
        label_weather_icon->setPixmap(QPixmap(QString::fromUtf8(":/icons/weather_icons/duoyun.png")));
        label_weather_icon->setScaledContents(true);

        horizontalLayout_5->addWidget(label_weather_icon);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_local_city = new DEFINE_QLABEL(Widget);
        label_local_city->setObjectName(QString::fromUtf8("label_local_city"));
        label_local_city->setMaximumSize(QSize(21, 21));
        label_local_city->setPixmap(QPixmap(QString::fromUtf8(":/icons/local.png")));
        label_local_city->setScaledContents(true);

        horizontalLayout_2->addWidget(label_local_city);

        label_city_name = new QLabel(Widget);
        label_city_name->setObjectName(QString::fromUtf8("label_city_name"));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277 Light"));
        font.setPointSize(13);
        label_city_name->setFont(font);
        label_city_name->setOpenExternalLinks(false);

        horizontalLayout_2->addWidget(label_city_name);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_real_time_temp = new QLabel(Widget);
        label_real_time_temp->setObjectName(QString::fromUtf8("label_real_time_temp"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font1.setPointSize(75);
        label_real_time_temp->setFont(font1);

        horizontalLayout_4->addWidget(label_real_time_temp);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\347\255\211\347\272\277 Light"));
        font2.setPointSize(20);
        label_4->setFont(font2);

        horizontalLayout_3->addWidget(label_4);

        label_refresh = new DEFINE_QLABEL(Widget);
        label_refresh->setObjectName(QString::fromUtf8("label_refresh"));
        label_refresh->setMaximumSize(QSize(16, 16));
        label_refresh->setPixmap(QPixmap(QString::fromUtf8(":/icons/refresh.png")));
        label_refresh->setScaledContents(true);

        horizontalLayout_3->addWidget(label_refresh);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_4->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_temp_1 = new QLabel(Widget);
        label_temp_1->setObjectName(QString::fromUtf8("label_temp_1"));
        label_temp_1->setFont(font);

        horizontalLayout->addWidget(label_temp_1);

        label_weather_type_1 = new QLabel(Widget);
        label_weather_type_1->setObjectName(QString::fromUtf8("label_weather_type_1"));
        label_weather_type_1->setFont(font);
        label_weather_type_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_weather_type_1);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_5->addLayout(verticalLayout_3);

        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 3);

        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        label_show_message = new QLabel(Widget);
        label_show_message->setObjectName(QString::fromUtf8("label_show_message"));
        label_show_message->setFont(font);
        label_show_message->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_show_message);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label_weather_icon->setText(QString());
        label_local_city->setText(QString());
        label_city_name->setText(QApplication::translate("Widget", "\345\256\235\345\256\211\345\214\272", nullptr));
        label_real_time_temp->setText(QApplication::translate("Widget", "31", nullptr));
        label_4->setText(QApplication::translate("Widget", "\302\260", nullptr));
        label_refresh->setText(QString());
        label_temp_1->setText(QApplication::translate("Widget", "21\342\204\203-31\342\204\203", nullptr));
        label_weather_type_1->setText(QApplication::translate("Widget", "Sun", nullptr));
        label_show_message->setText(QApplication::translate("Widget", "\346\254\242\350\277\216\344\275\277\347\224\250hongbin\347\232\204\345\244\251\346\260\224\346\216\247\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
