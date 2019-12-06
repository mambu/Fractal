/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolBox *toolBoxFractals;
    QWidget *pageMandelbrot;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QPushButton *showMandelbrot;
    QSpacerItem *verticalSpacer;
    QWidget *pageJulia;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout_4;
    QLabel *label_13;
    QLineEdit *computationRe_Julia;
    QLabel *label_14;
    QLineEdit *computationIm_Julia;
    QPushButton *showJulia;
    QSpacerItem *verticalSpacer_2;
    QToolBox *toolBoxCommon;
    QWidget *pageParameters;
    QVBoxLayout *verticalLayout_7;
    QFormLayout *formLayout_5;
    QLabel *label_16;
    QLineEdit *centerRe;
    QLabel *label_17;
    QLineEdit *centerIm;
    QLabel *label_15;
    QLineEdit *zoom;
    QWidget *pageImage;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *imageWidth;
    QLabel *label_4;
    QLineEdit *imageHeight;
    QLabel *label_6;
    QComboBox *colorScheme;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonAbout;
    QPushButton *pushButtonAboutQt;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(571, 346);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo/logo_24x24.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setAutoFillBackground(false);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        toolBoxFractals = new QToolBox(widget);
        toolBoxFractals->setObjectName(QStringLiteral("toolBoxFractals"));
        toolBoxFractals->setAutoFillBackground(false);
        toolBoxFractals->setFrameShape(QFrame::StyledPanel);
        toolBoxFractals->setFrameShadow(QFrame::Plain);
        pageMandelbrot = new QWidget();
        pageMandelbrot->setObjectName(QStringLiteral("pageMandelbrot"));
        pageMandelbrot->setGeometry(QRect(0, 0, 263, 164));
        verticalLayout_3 = new QVBoxLayout(pageMandelbrot);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        showMandelbrot = new QPushButton(pageMandelbrot);
        showMandelbrot->setObjectName(QStringLiteral("showMandelbrot"));

        verticalLayout_6->addWidget(showMandelbrot);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout_6);

        toolBoxFractals->addItem(pageMandelbrot, QStringLiteral("Mandelbrot"));
        pageJulia = new QWidget();
        pageJulia->setObjectName(QStringLiteral("pageJulia"));
        pageJulia->setGeometry(QRect(0, 0, 302, 164));
        verticalLayout_4 = new QVBoxLayout(pageJulia);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_13 = new QLabel(pageJulia);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_13);

        computationRe_Julia = new QLineEdit(pageJulia);
        computationRe_Julia->setObjectName(QStringLiteral("computationRe_Julia"));
        computationRe_Julia->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, computationRe_Julia);

        label_14 = new QLabel(pageJulia);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_14);

        computationIm_Julia = new QLineEdit(pageJulia);
        computationIm_Julia->setObjectName(QStringLiteral("computationIm_Julia"));
        computationIm_Julia->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, computationIm_Julia);


        verticalLayout_4->addLayout(formLayout_4);

        showJulia = new QPushButton(pageJulia);
        showJulia->setObjectName(QStringLiteral("showJulia"));

        verticalLayout_4->addWidget(showJulia);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        toolBoxFractals->addItem(pageJulia, QStringLiteral("Julia"));

        horizontalLayout->addWidget(toolBoxFractals);

        toolBoxCommon = new QToolBox(widget);
        toolBoxCommon->setObjectName(QStringLiteral("toolBoxCommon"));
        pageParameters = new QWidget();
        pageParameters->setObjectName(QStringLiteral("pageParameters"));
        pageParameters->setGeometry(QRect(0, 0, 264, 166));
        verticalLayout_7 = new QVBoxLayout(pageParameters);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        label_16 = new QLabel(pageParameters);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_16);

        centerRe = new QLineEdit(pageParameters);
        centerRe->setObjectName(QStringLiteral("centerRe"));
        centerRe->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, centerRe);

        label_17 = new QLabel(pageParameters);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_17);

        centerIm = new QLineEdit(pageParameters);
        centerIm->setObjectName(QStringLiteral("centerIm"));
        centerIm->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, centerIm);

        label_15 = new QLabel(pageParameters);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_15);

        zoom = new QLineEdit(pageParameters);
        zoom->setObjectName(QStringLiteral("zoom"));
        zoom->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_5->setWidget(2, QFormLayout::FieldRole, zoom);


        verticalLayout_7->addLayout(formLayout_5);

        toolBoxCommon->addItem(pageParameters, QStringLiteral("Fractal parameters"));
        pageImage = new QWidget();
        pageImage->setObjectName(QStringLiteral("pageImage"));
        pageImage->setGeometry(QRect(0, 0, 264, 166));
        verticalLayout_2 = new QVBoxLayout(pageImage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_3 = new QLabel(pageImage);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        imageWidth = new QLineEdit(pageImage);
        imageWidth->setObjectName(QStringLiteral("imageWidth"));
        imageWidth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, imageWidth);

        label_4 = new QLabel(pageImage);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        imageHeight = new QLineEdit(pageImage);
        imageHeight->setObjectName(QStringLiteral("imageHeight"));
        imageHeight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, imageHeight);

        label_6 = new QLabel(pageImage);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_6);

        colorScheme = new QComboBox(pageImage);
        colorScheme->setObjectName(QStringLiteral("colorScheme"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, colorScheme);


        verticalLayout_2->addLayout(formLayout_2);

        toolBoxCommon->addItem(pageImage, QStringLiteral("Image parameters"));

        horizontalLayout->addWidget(toolBoxCommon);


        verticalLayout->addWidget(widget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButtonAbout = new QPushButton(centralwidget);
        pushButtonAbout->setObjectName(QStringLiteral("pushButtonAbout"));

        horizontalLayout_2->addWidget(pushButtonAbout);

        pushButtonAboutQt = new QPushButton(centralwidget);
        pushButtonAboutQt->setObjectName(QStringLiteral("pushButtonAboutQt"));

        horizontalLayout_2->addWidget(pushButtonAboutQt);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 571, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonAboutQt, SIGNAL(clicked()), MainWindow, SLOT(aboutQt()));
        QObject::connect(showMandelbrot, SIGNAL(clicked()), MainWindow, SLOT(showMandelbrot()));
        QObject::connect(showJulia, SIGNAL(clicked()), MainWindow, SLOT(showJulia()));
        QObject::connect(pushButtonAbout, SIGNAL(clicked()), MainWindow, SLOT(about()));

        toolBoxFractals->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Qt Fractal Generator", nullptr));
        showMandelbrot->setText(QApplication::translate("MainWindow", "Show fractal", nullptr));
        toolBoxFractals->setItemText(toolBoxFractals->indexOf(pageMandelbrot), QApplication::translate("MainWindow", "Mandelbrot", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Computation point X (Re)", nullptr));
        computationRe_Julia->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Computation point Y (Im)", nullptr));
        computationIm_Julia->setText(QApplication::translate("MainWindow", "0", nullptr));
        showJulia->setText(QApplication::translate("MainWindow", "Show fractal", nullptr));
        toolBoxFractals->setItemText(toolBoxFractals->indexOf(pageJulia), QApplication::translate("MainWindow", "Julia", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Center X (Re)", nullptr));
        centerRe->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "Center Y (Im)", nullptr));
        centerIm->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Zoom", nullptr));
        zoom->setText(QApplication::translate("MainWindow", "1", nullptr));
        toolBoxCommon->setItemText(toolBoxCommon->indexOf(pageParameters), QApplication::translate("MainWindow", "Fractal parameters", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Width", nullptr));
        imageWidth->setText(QApplication::translate("MainWindow", "320", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Height", nullptr));
        imageHeight->setText(QApplication::translate("MainWindow", "240", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Color scheme", nullptr));
        toolBoxCommon->setItemText(toolBoxCommon->indexOf(pageImage), QApplication::translate("MainWindow", "Image parameters", nullptr));
        pushButtonAbout->setText(QApplication::translate("MainWindow", "About", nullptr));
        pushButtonAboutQt->setText(QApplication::translate("MainWindow", "About Qt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
