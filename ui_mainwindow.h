/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableView *tableView;
    QLabel *status;
    QWidget *User;
    QTableWidget *tableWidget;
    QPushButton *pushButton_3;
    QLabel *label;
    QLineEdit *SearchAutor;
    QLabel *label_2;
    QLabel *SearchPublishLable;
    QLineEdit *SearchPublish;
    QLabel *lablee;
    QLineEdit *SearchTimePublish;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1191, 567);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 1231, 641));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 10, 151, 41));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 10, 151, 41));
        tableView = new QTableView(tab);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 60, 1131, 401));
        status = new QLabel(tab);
        status->setObjectName(QString::fromUtf8("status"));
        status->setGeometry(QRect(20, 460, 1081, 31));
        tabWidget->addTab(tab, QString());
        User = new QWidget();
        User->setObjectName(QString::fromUtf8("User"));
        tableWidget = new QTableWidget(User);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 90, 1141, 381));
        pushButton_3 = new QPushButton(User);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 20, 111, 51));
        label = new QLabel(User);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 30, 41, 31));
        SearchAutor = new QLineEdit(User);
        SearchAutor->setObjectName(QString::fromUtf8("SearchAutor"));
        SearchAutor->setGeometry(QRect(260, 40, 113, 21));
        label_2 = new QLabel(User);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 40, 51, 21));
        SearchPublishLable = new QLabel(User);
        SearchPublishLable->setObjectName(QString::fromUtf8("SearchPublishLable"));
        SearchPublishLable->setGeometry(QRect(410, 40, 71, 20));
        SearchPublish = new QLineEdit(User);
        SearchPublish->setObjectName(QString::fromUtf8("SearchPublish"));
        SearchPublish->setGeometry(QRect(470, 40, 113, 21));
        lablee = new QLabel(User);
        lablee->setObjectName(QString::fromUtf8("lablee"));
        lablee->setGeometry(QRect(610, 40, 91, 20));
        SearchTimePublish = new QLineEdit(User);
        SearchTimePublish->setObjectName(QString::fromUtf8("SearchTimePublish"));
        SearchTimePublish->setGeometry(QRect(710, 40, 113, 21));
        tabWidget->addTab(User, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1191, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\272\320\275\320\270\320\263\321\203", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\272\320\275\320\270\320\263\321\203", nullptr));
        status->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Admin", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Autor:", nullptr));
        SearchPublishLable->setText(QCoreApplication::translate("MainWindow", "Publish:", nullptr));
        lablee->setText(QCoreApplication::translate("MainWindow", "Time Publish:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(User), QCoreApplication::translate("MainWindow", "User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
