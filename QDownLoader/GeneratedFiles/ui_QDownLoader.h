/********************************************************************************
** Form generated from reading UI file 'QDownLoader.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDOWNLOADER_H
#define UI_QDOWNLOADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QDownLoaderClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QProgressBar *progressBar;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_qq;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QDownLoaderClass)
    {
        if (QDownLoaderClass->objectName().isEmpty())
            QDownLoaderClass->setObjectName(QStringLiteral("QDownLoaderClass"));
        QDownLoaderClass->resize(567, 400);
        centralWidget = new QWidget(QDownLoaderClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout_2->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        verticalLayout_2->addWidget(progressBar);


        horizontalLayout_2->addLayout(verticalLayout_2);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_qq = new QPushButton(groupBox);
        pushButton_qq->setObjectName(QStringLiteral("pushButton_qq"));

        verticalLayout->addWidget(pushButton_qq);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);


        horizontalLayout_2->addWidget(groupBox);

        QDownLoaderClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QDownLoaderClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 567, 23));
        QDownLoaderClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QDownLoaderClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QDownLoaderClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QDownLoaderClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QDownLoaderClass->setStatusBar(statusBar);

        retranslateUi(QDownLoaderClass);

        QMetaObject::connectSlotsByName(QDownLoaderClass);
    } // setupUi

    void retranslateUi(QMainWindow *QDownLoaderClass)
    {
        QDownLoaderClass->setWindowTitle(QApplication::translate("QDownLoaderClass", "QDownLoader", Q_NULLPTR));
        label->setText(QApplication::translate("QDownLoaderClass", "url\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("QDownLoaderClass", "\350\216\267\345\217\226\351\241\265\351\235\242\344\277\241\346\201\257", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("QDownLoaderClass", "\344\270\213\350\275\275", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QDownLoaderClass", "\346\216\250\350\215\220\344\270\213\350\275\275", Q_NULLPTR));
        pushButton_qq->setText(QApplication::translate("QDownLoaderClass", "QQ", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("QDownLoaderClass", "\345\276\256\344\277\241", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QDownLoaderClass: public Ui_QDownLoaderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDOWNLOADER_H
