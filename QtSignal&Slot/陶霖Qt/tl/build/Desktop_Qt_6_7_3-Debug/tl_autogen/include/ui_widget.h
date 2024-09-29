/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *QQlb;
    QPushButton *BuildB;
    QPushButton *EnterB;
    QLineEdit *Passedit;
    QLineEdit *IDedit;
    QLabel *IDlb;
    QLabel *Passlb;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        QQlb = new QLabel(Widget);
        QQlb->setObjectName("QQlb");
        QQlb->setGeometry(QRect(310, 80, 101, 41));
        QFont font;
        font.setPointSize(20);
        QQlb->setFont(font);
        QQlb->setAlignment(Qt::AlignmentFlag::AlignCenter);
        BuildB = new QPushButton(Widget);
        BuildB->setObjectName("BuildB");
        BuildB->setGeometry(QRect(390, 280, 121, 51));
        BuildB->setFont(font);
        EnterB = new QPushButton(Widget);
        EnterB->setObjectName("EnterB");
        EnterB->setGeometry(QRect(240, 280, 111, 51));
        EnterB->setFont(font);
        Passedit = new QLineEdit(Widget);
        Passedit->setObjectName("Passedit");
        Passedit->setGeometry(QRect(210, 210, 451, 41));
        Passedit->setFont(font);
        Passedit->setEchoMode(QLineEdit::EchoMode::Password);
        IDedit = new QLineEdit(Widget);
        IDedit->setObjectName("IDedit");
        IDedit->setGeometry(QRect(210, 150, 451, 41));
        IDedit->setFont(font);
        IDlb = new QLabel(Widget);
        IDlb->setObjectName("IDlb");
        IDlb->setGeometry(QRect(130, 150, 71, 41));
        IDlb->setFont(font);
        IDlb->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Passlb = new QLabel(Widget);
        Passlb->setObjectName("Passlb");
        Passlb->setGeometry(QRect(40, 190, 161, 81));
        Passlb->setFont(font);
        Passlb->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        QQlb->setText(QCoreApplication::translate("Widget", "QQ", nullptr));
        BuildB->setText(QCoreApplication::translate("Widget", "Create ID", nullptr));
        EnterB->setText(QCoreApplication::translate("Widget", "Login", nullptr));
        Passedit->setText(QString());
        IDedit->setText(QString());
        IDlb->setText(QCoreApplication::translate("Widget", "ID:", nullptr));
        Passlb->setText(QCoreApplication::translate("Widget", "Psaaword:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
