/********************************************************************************
** Form generated from reading UI file 'AboutForm.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTFORM_H
#define UI_ABOUTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *labelLinkToProjectHosting;
    QLabel *label_3;
    QLabel *label_2;

    void setupUi(QDialog *AboutForm)
    {
        if (AboutForm->objectName().isEmpty())
            AboutForm->setObjectName(QStringLiteral("AboutForm"));
        AboutForm->resize(400, 300);
        verticalLayout = new QVBoxLayout(AboutForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_5 = new QLabel(AboutForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/logo/logo_24x24.png")));

        horizontalLayout->addWidget(label_5);

        label = new QLabel(AboutForm);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        textBrowser = new QTextBrowser(AboutForm);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setEnabled(true);
        textBrowser->setAutoFillBackground(false);
        textBrowser->setFrameShape(QFrame::StyledPanel);
        textBrowser->setFrameShadow(QFrame::Sunken);
        textBrowser->setLineWidth(1);
        textBrowser->setReadOnly(true);
        textBrowser->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout->addWidget(textBrowser);

        labelLinkToProjectHosting = new QLabel(AboutForm);
        labelLinkToProjectHosting->setObjectName(QStringLiteral("labelLinkToProjectHosting"));
        labelLinkToProjectHosting->setAlignment(Qt::AlignCenter);
        labelLinkToProjectHosting->setOpenExternalLinks(true);
        labelLinkToProjectHosting->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(labelLinkToProjectHosting);

        label_3 = new QLabel(AboutForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(AboutForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);


        retranslateUi(AboutForm);

        QMetaObject::connectSlotsByName(AboutForm);
    } // setupUi

    void retranslateUi(QDialog *AboutForm)
    {
        AboutForm->setWindowTitle(QApplication::translate("AboutForm", "About", nullptr));
        label_5->setText(QString());
        label->setText(QApplication::translate("AboutForm", "Fractal Viewer", nullptr));
        textBrowser->setHtml(QApplication::translate("AboutForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This program computes the Mandelbrot and Julia fractals and and shows them as images.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This application is open source and source code can be found on google code project hosting.</p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        labelLinkToProjectHosting->setToolTip(QApplication::translate("AboutForm", "http://code.google.com/p/fractal-qt/", nullptr));
#endif // QT_NO_TOOLTIP
        labelLinkToProjectHosting->setText(QApplication::translate("AboutForm", "<a href=\"http://code.google.com/p/fractal-qt/\">Go to project hosting web page</a>", nullptr));
        label_3->setText(QApplication::translate("AboutForm", "This software is realeased under the MIT license.", nullptr));
        label_2->setText(QApplication::translate("AboutForm", "Copyright (c) 2010 Marco Ambu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutForm: public Ui_AboutForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTFORM_H
