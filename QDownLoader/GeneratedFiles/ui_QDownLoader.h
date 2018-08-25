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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QDownLoaderClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_qq;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QWidget *tab_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QDownLoaderClass)
    {
        if (QDownLoaderClass->objectName().isEmpty())
            QDownLoaderClass->setObjectName(QStringLiteral("QDownLoaderClass"));
        QDownLoaderClass->resize(691, 687);
        centralWidget = new QWidget(QDownLoaderClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(530, 10, 153, 128));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_qq = new QPushButton(groupBox);
        pushButton_qq->setObjectName(QStringLiteral("pushButton_qq"));

        verticalLayout->addWidget(pushButton_qq);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 481, 591));
        tabWidget->setTabPosition(QTabWidget::North);
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(570, 240, 80, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(570, 200, 75, 23));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(560, 170, 87, 20));
        progressBar->setValue(0);
        QDownLoaderClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QDownLoaderClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 691, 23));
        QDownLoaderClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QDownLoaderClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QDownLoaderClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QDownLoaderClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QDownLoaderClass->setStatusBar(statusBar);

        retranslateUi(QDownLoaderClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QDownLoaderClass);
    } // setupUi

    void retranslateUi(QMainWindow *QDownLoaderClass)
    {
        QDownLoaderClass->setWindowTitle(QApplication::translate("QDownLoaderClass", "QDownLoader", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QDownLoaderClass", "\346\216\250\350\215\220\344\270\213\350\275\275", Q_NULLPTR));
        pushButton_qq->setText(QApplication::translate("QDownLoaderClass", "QQ", Q_NULLPTR));
        label->setText(QApplication::translate("QDownLoaderClass", "url\357\274\232", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("QDownLoaderClass", "\345\276\256\344\277\241", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("QDownLoaderClass", "\345\267\262\347\273\217\345\256\214\346\210\220", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("QDownLoaderClass", "\345\236\203\345\234\276\347\256\261", Q_NULLPTR));
        pushButton->setText(QApplication::translate("QDownLoaderClass", "\350\216\267\345\217\226\351\241\265\351\235\242\344\277\241\346\201\257", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("QDownLoaderClass", "\344\270\213\350\275\275", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QDownLoaderClass: public Ui_QDownLoaderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDOWNLOADER_H
