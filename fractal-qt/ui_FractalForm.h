/********************************************************************************
** Form generated from reading UI file 'FractalForm.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRACTALFORM_H
#define UI_FRACTALFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FractalForm
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGraphicsView *graphicsView;
    QSpacerItem *horizontalSpacer_2;
    QToolBox *toolBox;
    QWidget *page_fractal;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *labelCenter;
    QLabel *labelCenterValue;
    QLabel *labelZoom;
    QLabel *labelZoomValue;
    QLabel *labelIterations;
    QLabel *labelIterationsValue;
    QWidget *page_img;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_2;
    QLabel *labelWidth;
    QLabel *labelWidthValue;
    QLabel *labelHeight;
    QLabel *labelHeightValue;
    QLabel *labelColorScheme;
    QLabel *labelColorSchemeValue;
    QWidget *pageTools;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButtonSaveImg;
    QSpacerItem *verticalSpacer;
    QLabel *labelStatusBar;
    QProgressBar *progressBar;

    void setupUi(QWidget *FractalForm)
    {
        if (FractalForm->objectName().isEmpty())
            FractalForm->setObjectName(QStringLiteral("FractalForm"));
        FractalForm->resize(570, 404);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FractalForm->sizePolicy().hasHeightForWidth());
        FractalForm->setSizePolicy(sizePolicy);
        FractalForm->setMinimumSize(QSize(50, 50));
        verticalLayout = new QVBoxLayout(FractalForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(FractalForm);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(50, 50));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(5, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        graphicsView = new QGraphicsView(widget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy1);
        graphicsView->setContextMenuPolicy(Qt::CustomContextMenu);

        horizontalLayout->addWidget(graphicsView);

        horizontalSpacer_2 = new QSpacerItem(5, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget);

        toolBox = new QToolBox(FractalForm);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setFrameShape(QFrame::StyledPanel);
        page_fractal = new QWidget();
        page_fractal->setObjectName(QStringLiteral("page_fractal"));
        page_fractal->setGeometry(QRect(0, 0, 534, 83));
        verticalLayout_2 = new QVBoxLayout(page_fractal);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        labelCenter = new QLabel(page_fractal);
        labelCenter->setObjectName(QStringLiteral("labelCenter"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelCenter);

        labelCenterValue = new QLabel(page_fractal);
        labelCenterValue->setObjectName(QStringLiteral("labelCenterValue"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelCenterValue);

        labelZoom = new QLabel(page_fractal);
        labelZoom->setObjectName(QStringLiteral("labelZoom"));
        labelZoom->setTextFormat(Qt::PlainText);

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZoom);

        labelZoomValue = new QLabel(page_fractal);
        labelZoomValue->setObjectName(QStringLiteral("labelZoomValue"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZoomValue);

        labelIterations = new QLabel(page_fractal);
        labelIterations->setObjectName(QStringLiteral("labelIterations"));
        labelIterations->setTextFormat(Qt::PlainText);

        formLayout->setWidget(2, QFormLayout::LabelRole, labelIterations);

        labelIterationsValue = new QLabel(page_fractal);
        labelIterationsValue->setObjectName(QStringLiteral("labelIterationsValue"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelIterationsValue);


        verticalLayout_2->addLayout(formLayout);

        toolBox->addItem(page_fractal, QStringLiteral("Fractal info"));
        page_img = new QWidget();
        page_img->setObjectName(QStringLiteral("page_img"));
        page_img->setGeometry(QRect(0, 0, 534, 83));
        verticalLayout_3 = new QVBoxLayout(page_img);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        labelWidth = new QLabel(page_img);
        labelWidth->setObjectName(QStringLiteral("labelWidth"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, labelWidth);

        labelWidthValue = new QLabel(page_img);
        labelWidthValue->setObjectName(QStringLiteral("labelWidthValue"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelWidthValue);

        labelHeight = new QLabel(page_img);
        labelHeight->setObjectName(QStringLiteral("labelHeight"));
        labelHeight->setMidLineWidth(0);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, labelHeight);

        labelHeightValue = new QLabel(page_img);
        labelHeightValue->setObjectName(QStringLiteral("labelHeightValue"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, labelHeightValue);

        labelColorScheme = new QLabel(page_img);
        labelColorScheme->setObjectName(QStringLiteral("labelColorScheme"));
        labelColorScheme->setMidLineWidth(0);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, labelColorScheme);

        labelColorSchemeValue = new QLabel(page_img);
        labelColorSchemeValue->setObjectName(QStringLiteral("labelColorSchemeValue"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, labelColorSchemeValue);


        verticalLayout_3->addLayout(formLayout_2);

        toolBox->addItem(page_img, QStringLiteral("Image info"));
        pageTools = new QWidget();
        pageTools->setObjectName(QStringLiteral("pageTools"));
        pageTools->setGeometry(QRect(0, 0, 550, 82));
        verticalLayout_4 = new QVBoxLayout(pageTools);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        pushButtonSaveImg = new QPushButton(pageTools);
        pushButtonSaveImg->setObjectName(QStringLiteral("pushButtonSaveImg"));

        verticalLayout_4->addWidget(pushButtonSaveImg);

        toolBox->addItem(pageTools, QStringLiteral("Tools"));

        verticalLayout->addWidget(toolBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        labelStatusBar = new QLabel(FractalForm);
        labelStatusBar->setObjectName(QStringLiteral("labelStatusBar"));

        verticalLayout->addWidget(labelStatusBar);

        progressBar = new QProgressBar(FractalForm);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);


        retranslateUi(FractalForm);
        QObject::connect(graphicsView, SIGNAL(customContextMenuRequested(QPoint)), FractalForm, SLOT(onClick(QPoint)));

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FractalForm);
    } // setupUi

    void retranslateUi(QWidget *FractalForm)
    {
        FractalForm->setWindowTitle(QApplication::translate("FractalForm", "FractalForm", nullptr));
        labelCenter->setText(QApplication::translate("FractalForm", "Center", nullptr));
        labelCenterValue->setText(QApplication::translate("FractalForm", "TextLabel", nullptr));
        labelZoom->setText(QApplication::translate("FractalForm", "Zoom", nullptr));
        labelZoomValue->setText(QApplication::translate("FractalForm", "TextLabel", nullptr));
        labelIterations->setText(QApplication::translate("FractalForm", "Iterations", nullptr));
        labelIterationsValue->setText(QApplication::translate("FractalForm", "TextLabel", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_fractal), QApplication::translate("FractalForm", "Fractal info", nullptr));
        labelWidth->setText(QApplication::translate("FractalForm", "Width", nullptr));
        labelWidthValue->setText(QApplication::translate("FractalForm", "TextLabel", nullptr));
        labelHeight->setText(QApplication::translate("FractalForm", "Height", nullptr));
        labelHeightValue->setText(QApplication::translate("FractalForm", "TextLabel", nullptr));
        labelColorScheme->setText(QApplication::translate("FractalForm", "Color scheme", nullptr));
        labelColorSchemeValue->setText(QApplication::translate("FractalForm", "TextLabel", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_img), QApplication::translate("FractalForm", "Image info", nullptr));
        pushButtonSaveImg->setText(QApplication::translate("FractalForm", "Save image as...", nullptr));
        toolBox->setItemText(toolBox->indexOf(pageTools), QApplication::translate("FractalForm", "Tools", nullptr));
        labelStatusBar->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FractalForm: public Ui_FractalForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRACTALFORM_H
