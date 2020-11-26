/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *leschantiers;
    QTabWidget *tabWidget_2;
    QWidget *ajouter;
    QFrame *frame;
    QFrame *frame_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEditid;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *lineEditprenom;
    QDateEdit *dateEditddn;
    QLineEdit *lineEditnom;
    QLabel *label_3;
    QLineEdit *lineEdittelephone;
    QLabel *label_13;
    QComboBox *comboBox_post;
    QPushButton *pushButton;
    QGraphicsView *graphicsView;
    QWidget *listedeschantiers;
    QFrame *frame_3;
    QTableView *tableViewEmploye;
    QFrame *frame_4;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *lineEditposte_2;
    QLineEdit *lineEditprenom_2;
    QLabel *label_10;
    QLabel *label_8;
    QLabel *label_7;
    QLineEdit *lineEditadres_2;
    QLabel *label_9;
    QDateEdit *dateEdit_2;
    QLabel *label_12;
    QComboBox *comboBox_5;
    QLineEdit *lineEdittel;
    QPushButton *modifierchantier;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_11;
    QComboBox *comboBox;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_18;
    QPushButton *pb_ok1;
    QFrame *frame1_3;
    QLabel *label_65;
    QLineEdit *lineEdit_19;
    QPushButton *supprimeremploye;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_4;
    QWidget *tab_2;
    QTabWidget *tabWidget_3;
    QWidget *tab;
    QFrame *frame_6;
    QFrame *frame1;
    QLabel *label_64;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_14;
    QLabel *label_58;
    QLabel *label_54;
    QLineEdit *lineEditsalaire;
    QLabel *label_55;
    QLineEdit *lineEditid_5;
    QLineEdit *lineEditgrade;
    QLineEdit *lineEdithoraire;
    QLabel *label_56;
    QLineEdit *lineEditavantage;
    QPushButton *pushButton_2;
    QGraphicsView *graphicsView_3;
    QWidget *tab_3;
    QFrame *frame_5;
    QFrame *frame_7;
    QTableView *tableViewposte;
    QFrame *frame_8;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_18;
    QLineEdit *lineEditadres_3;
    QLabel *label_20;
    QLabel *label_17;
    QLabel *label_16;
    QLineEdit *lineEditsurface_4;
    QLabel *label_15;
    QLineEdit *lineEditbudget_4;
    QLineEdit *lineEditbudget_5;
    QComboBox *comboBox_4;
    QPushButton *modifierchantier_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_21;
    QComboBox *comboBox_2;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_20;
    QPushButton *pb_ok1_2;
    QFrame *frame1_4;
    QLineEdit *lineEdit_21;
    QPushButton *supprimerposte_2;
    QGraphicsView *graphicsView_5;
    QGraphicsView *graphicsView_6;
    QLabel *label_66;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(951, 596);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("QTabWidget::pane { \n"
"     border-top: 2px solid #FFFFFF;\n"
" }\n"
"\n"
" QTabWidget::tab-bar {\n"
"     left: 5px;\n"
" }\n"
"\n"
" QTabBar::tab {\n"
"  background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #1b83fe, stop: 0.4 #4399fe,\n"
"                                 stop: 0.5 #5da7fe, stop: 1.0 #77b5fe);\n"
"     border: 2px solid #77b5fe;\n"
"    /* border-bottom-color: #FFFFFF; */\n"
"     border-top-left-radius: 4px;\n"
"     border-top-right-radius: 4px;\n"
"     min-width: 8ex;\n"
"     padding: 2px;\n"
" }\n"
"\n"
"QTabBar::tab:hover {\n"
"  border-color: #FFFFFF;\n"
" }\n"
"\n"
" QTabBar::tab:selected {\n"
"    \n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #f7e5d9, stop: 0.4 #f1ceb7,\n"
"                                 stop: 0.5 #ecbd9d, stop: 1.0 #e7ac84);\n"
"     border-color: #e7ac84;\n"
"    /* border-bottom-color: #FFFFFF; */\n"
" }\n"
"\n"
"\n"
" QTabBar::tab:!selected {\n"
" "
                        "    margin-top: 5px; \n"
" }\n"
"\n"
"QFrame#frame,#frame_3,#frame_5,#frame_6{\n"
"background:rgba(247,229,217,0.5);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QFrame#frame_2,#frame_4,#frame1_3,#frame1{\n"
"background:rgba(119,181,254,0.5);\n"
"border-radius:15px;\n"
"}\n"
"QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid #2d3436;\n"
"}\n"
"QPushButton{\n"
"background:  rgba(119,181,254,0.5);\n"
"border-radius:20px;\n"
"border-radius:15px;\n"
"}\n"
"QPushButton:hover{\n"
"background:  rgba(119,181,254);\n"
"color:white;\n"
"}\n"
"QTableView {\n"
"background:rgba(119,181,254,0.5);\n"
"border-radius:20px;\n"
"  \n"
" }"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 921, 551));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        leschantiers = new QWidget();
        leschantiers->setObjectName(QStringLiteral("leschantiers"));
        tabWidget_2 = new QTabWidget(leschantiers);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 861, 451));
        tabWidget_2->setFont(font);
        ajouter = new QWidget();
        ajouter->setObjectName(QStringLiteral("ajouter"));
        frame = new QFrame(ajouter);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(-30, 0, 871, 431));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(50, 30, 441, 371));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(frame_2);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 10, 411, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEditid = new QLineEdit(gridLayoutWidget);
        lineEditid->setObjectName(QStringLiteral("lineEditid"));

        gridLayout->addWidget(lineEditid, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("Century"));
        font1.setPointSize(11);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEditprenom = new QLineEdit(gridLayoutWidget);
        lineEditprenom->setObjectName(QStringLiteral("lineEditprenom"));

        gridLayout->addWidget(lineEditprenom, 2, 1, 1, 1);

        dateEditddn = new QDateEdit(gridLayoutWidget);
        dateEditddn->setObjectName(QStringLiteral("dateEditddn"));
        dateEditddn->setMinimumSize(QSize(100, 0));
        dateEditddn->setMaximumSize(QSize(12, 17));
        dateEditddn->setTabletTracking(false);

        gridLayout->addWidget(dateEditddn, 5, 1, 1, 1);

        lineEditnom = new QLineEdit(gridLayoutWidget);
        lineEditnom->setObjectName(QStringLiteral("lineEditnom"));

        gridLayout->addWidget(lineEditnom, 1, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdittelephone = new QLineEdit(gridLayoutWidget);
        lineEdittelephone->setObjectName(QStringLiteral("lineEdittelephone"));

        gridLayout->addWidget(lineEdittelephone, 4, 1, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font1);

        gridLayout->addWidget(label_13, 4, 0, 1, 1);

        comboBox_post = new QComboBox(gridLayoutWidget);
        comboBox_post->setObjectName(QStringLiteral("comboBox_post"));

        gridLayout->addWidget(comboBox_post, 3, 1, 1, 1);

        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 320, 211, 31));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(false);
        font2.setWeight(50);
        pushButton->setFont(font2);
        graphicsView = new QGraphicsView(frame);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(550, 100, 281, 251));
        graphicsView->setStyleSheet(QLatin1String("border-image: url(:/perso.png);\n"
"border-radius:10px;"));
        tabWidget_2->addTab(ajouter, QString());
        listedeschantiers = new QWidget();
        listedeschantiers->setObjectName(QStringLiteral("listedeschantiers"));
        frame_3 = new QFrame(listedeschantiers);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 0, 881, 451));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        tableViewEmploye = new QTableView(frame_3);
        tableViewEmploye->setObjectName(QStringLiteral("tableViewEmploye"));
        tableViewEmploye->setGeometry(QRect(10, 80, 541, 321));
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(560, 10, 291, 321));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayoutWidget_2 = new QWidget(frame_4);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 10, 281, 261));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        lineEditposte_2 = new QLineEdit(gridLayoutWidget_2);
        lineEditposte_2->setObjectName(QStringLiteral("lineEditposte_2"));

        gridLayout_2->addWidget(lineEditposte_2, 3, 1, 1, 1);

        lineEditprenom_2 = new QLineEdit(gridLayoutWidget_2);
        lineEditprenom_2->setObjectName(QStringLiteral("lineEditprenom_2"));

        gridLayout_2->addWidget(lineEditprenom_2, 2, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        lineEditadres_2 = new QLineEdit(gridLayoutWidget_2);
        lineEditadres_2->setObjectName(QStringLiteral("lineEditadres_2"));

        gridLayout_2->addWidget(lineEditadres_2, 1, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        gridLayout_2->addWidget(label_9, 5, 0, 1, 1);

        dateEdit_2 = new QDateEdit(gridLayoutWidget_2);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setMinimumSize(QSize(100, 0));
        dateEdit_2->setMaximumSize(QSize(12, 17));
        dateEdit_2->setTabletTracking(false);

        gridLayout_2->addWidget(dateEdit_2, 5, 1, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);

        gridLayout_2->addWidget(label_12, 4, 0, 1, 1);

        comboBox_5 = new QComboBox(gridLayoutWidget_2);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        gridLayout_2->addWidget(comboBox_5, 0, 1, 1, 1);

        lineEdittel = new QLineEdit(gridLayoutWidget_2);
        lineEdittel->setObjectName(QStringLiteral("lineEdittel"));

        gridLayout_2->addWidget(lineEdittel, 4, 1, 1, 1);

        modifierchantier = new QPushButton(frame_4);
        modifierchantier->setObjectName(QStringLiteral("modifierchantier"));
        modifierchantier->setGeometry(QRect(80, 280, 111, 31));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        modifierchantier->setFont(font3);
        horizontalLayoutWidget = new QWidget(frame_3);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(220, 20, 178, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(horizontalLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);

        horizontalLayout->addWidget(label_11);

        comboBox = new QComboBox(horizontalLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setLayoutDirection(Qt::LeftToRight);
        comboBox->setStyleSheet(QLatin1String("QComboBox{\n"
"border:none;\n"
"border-bottom:1px solid #2d3436;\n"
"}\n"
"QComboBox::hover{\n"
"background: rgba(119,181,254,0.5);\n"
"}"));

        horizontalLayout->addWidget(comboBox);

        horizontalLayoutWidget_2 = new QWidget(frame_3);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(410, 20, 141, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_18 = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));
        lineEdit_18->setMaximumSize(QSize(100, 20));

        horizontalLayout_2->addWidget(lineEdit_18);

        pb_ok1 = new QPushButton(horizontalLayoutWidget_2);
        pb_ok1->setObjectName(QStringLiteral("pb_ok1"));

        horizontalLayout_2->addWidget(pb_ok1);

        frame1_3 = new QFrame(frame_3);
        frame1_3->setObjectName(QStringLiteral("frame1_3"));
        frame1_3->setGeometry(QRect(560, 340, 271, 71));
        frame1_3->setFrameShape(QFrame::StyledPanel);
        frame1_3->setFrameShadow(QFrame::Raised);
        label_65 = new QLabel(frame1_3);
        label_65->setObjectName(QStringLiteral("label_65"));
        label_65->setGeometry(QRect(30, 0, 221, 31));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        label_65->setFont(font4);
        label_65->setStyleSheet(QLatin1String("QLabel{\n"
"color: black;\n"
"\n"
"border: none;\n"
"}"));
        lineEdit_19 = new QLineEdit(frame1_3);
        lineEdit_19->setObjectName(QStringLiteral("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(10, 40, 101, 20));
        supprimeremploye = new QPushButton(frame1_3);
        supprimeremploye->setObjectName(QStringLiteral("supprimeremploye"));
        supprimeremploye->setGeometry(QRect(150, 30, 91, 31));
        graphicsView_2 = new QGraphicsView(frame_3);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(120, 10, 91, 61));
        graphicsView_2->setStyleSheet(QLatin1String("border-image: url(:/suppr.png);\n"
"\n"
"border-radius:10px;"));
        graphicsView_4 = new QGraphicsView(frame_3);
        graphicsView_4->setObjectName(QStringLiteral("graphicsView_4"));
        graphicsView_4->setGeometry(QRect(10, 10, 101, 61));
        graphicsView_4->setStyleSheet(QLatin1String("border-image: url(:/modif.png);\n"
"border-radius:10px;"));
        tabWidget_2->addTab(listedeschantiers, QString());
        tabWidget->addTab(leschantiers, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 841, 451));
        QFont font5;
        font5.setPointSize(10);
        tabWidget_3->setFont(font5);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        frame_6 = new QFrame(tab);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(-10, 0, 881, 441));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        frame1 = new QFrame(frame_6);
        frame1->setObjectName(QStringLiteral("frame1"));
        frame1->setGeometry(QRect(30, 10, 441, 401));
        frame1->setFrameShape(QFrame::StyledPanel);
        frame1->setFrameShadow(QFrame::Raised);
        label_64 = new QLabel(frame1);
        label_64->setObjectName(QStringLiteral("label_64"));
        label_64->setGeometry(QRect(90, 20, 191, 16));
        label_64->setFont(font4);
        label_64->setStyleSheet(QLatin1String("QLabel{\n"
"color: black;\n"
"\n"
"border: none;\n"
"}"));
        gridLayoutWidget_3 = new QWidget(frame1);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 50, 431, 251));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(gridLayoutWidget_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font1);

        gridLayout_3->addWidget(label_14, 3, 0, 1, 1);

        label_58 = new QLabel(gridLayoutWidget_3);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setFont(font1);

        gridLayout_3->addWidget(label_58, 4, 0, 1, 1);

        label_54 = new QLabel(gridLayoutWidget_3);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setFont(font1);

        gridLayout_3->addWidget(label_54, 0, 0, 1, 1);

        lineEditsalaire = new QLineEdit(gridLayoutWidget_3);
        lineEditsalaire->setObjectName(QStringLiteral("lineEditsalaire"));

        gridLayout_3->addWidget(lineEditsalaire, 4, 1, 1, 1);

        label_55 = new QLabel(gridLayoutWidget_3);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setFont(font1);

        gridLayout_3->addWidget(label_55, 1, 0, 1, 1);

        lineEditid_5 = new QLineEdit(gridLayoutWidget_3);
        lineEditid_5->setObjectName(QStringLiteral("lineEditid_5"));

        gridLayout_3->addWidget(lineEditid_5, 0, 1, 1, 1);

        lineEditgrade = new QLineEdit(gridLayoutWidget_3);
        lineEditgrade->setObjectName(QStringLiteral("lineEditgrade"));

        gridLayout_3->addWidget(lineEditgrade, 1, 1, 1, 1);

        lineEdithoraire = new QLineEdit(gridLayoutWidget_3);
        lineEdithoraire->setObjectName(QStringLiteral("lineEdithoraire"));

        gridLayout_3->addWidget(lineEdithoraire, 3, 1, 1, 1);

        label_56 = new QLabel(gridLayoutWidget_3);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setFont(font1);

        gridLayout_3->addWidget(label_56, 2, 0, 1, 1);

        lineEditavantage = new QLineEdit(gridLayoutWidget_3);
        lineEditavantage->setObjectName(QStringLiteral("lineEditavantage"));

        gridLayout_3->addWidget(lineEditavantage, 2, 1, 1, 1);

        pushButton_2 = new QPushButton(frame1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 340, 211, 31));
        pushButton_2->setFont(font2);
        graphicsView_3 = new QGraphicsView(frame_6);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(510, 110, 291, 231));
        graphicsView_3->setStyleSheet(QLatin1String("border-image: url(:/aaaaa.png);\n"
"border-radius:10px;"));
        tabWidget_3->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        frame_5 = new QFrame(tab_3);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(9, 0, 831, 421));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        frame_7 = new QFrame(frame_5);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(-10, 10, 900, 421));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        tableViewposte = new QTableView(frame_7);
        tableViewposte->setObjectName(QStringLiteral("tableViewposte"));
        tableViewposte->setGeometry(QRect(10, 80, 541, 321));
        frame_8 = new QFrame(frame_7);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setGeometry(QRect(560, 10, 271, 321));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        gridLayoutWidget_4 = new QWidget(frame_8);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(0, 20, 271, 251));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_4->setHorizontalSpacing(6);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(gridLayoutWidget_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font1);

        gridLayout_4->addWidget(label_18, 2, 0, 1, 1);

        lineEditadres_3 = new QLineEdit(gridLayoutWidget_4);
        lineEditadres_3->setObjectName(QStringLiteral("lineEditadres_3"));

        gridLayout_4->addWidget(lineEditadres_3, 1, 1, 1, 1);

        label_20 = new QLabel(gridLayoutWidget_4);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font1);

        gridLayout_4->addWidget(label_20, 4, 0, 1, 1);

        label_17 = new QLabel(gridLayoutWidget_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font1);

        gridLayout_4->addWidget(label_17, 3, 0, 1, 1);

        label_16 = new QLabel(gridLayoutWidget_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font1);

        gridLayout_4->addWidget(label_16, 1, 0, 1, 1);

        lineEditsurface_4 = new QLineEdit(gridLayoutWidget_4);
        lineEditsurface_4->setObjectName(QStringLiteral("lineEditsurface_4"));

        gridLayout_4->addWidget(lineEditsurface_4, 2, 1, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font1);

        gridLayout_4->addWidget(label_15, 0, 0, 1, 1);

        lineEditbudget_4 = new QLineEdit(gridLayoutWidget_4);
        lineEditbudget_4->setObjectName(QStringLiteral("lineEditbudget_4"));

        gridLayout_4->addWidget(lineEditbudget_4, 3, 1, 1, 1);

        lineEditbudget_5 = new QLineEdit(gridLayoutWidget_4);
        lineEditbudget_5->setObjectName(QStringLiteral("lineEditbudget_5"));

        gridLayout_4->addWidget(lineEditbudget_5, 4, 1, 1, 1);

        comboBox_4 = new QComboBox(gridLayoutWidget_4);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        gridLayout_4->addWidget(comboBox_4, 0, 1, 1, 1);

        modifierchantier_2 = new QPushButton(frame_8);
        modifierchantier_2->setObjectName(QStringLiteral("modifierchantier_2"));
        modifierchantier_2->setGeometry(QRect(80, 270, 111, 31));
        modifierchantier_2->setFont(font3);
        horizontalLayoutWidget_3 = new QWidget(frame_7);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(220, 20, 178, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(horizontalLayoutWidget_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setFont(font1);

        horizontalLayout_3->addWidget(label_21);

        comboBox_2 = new QComboBox(horizontalLayoutWidget_3);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setLayoutDirection(Qt::LeftToRight);
        comboBox_2->setStyleSheet(QLatin1String("QComboBox{\n"
"border:none;\n"
"border-bottom:1px solid #2d3436;\n"
"}\n"
"QComboBox::hover{\n"
"background: rgba(119,181,254,0.5);\n"
"}"));

        horizontalLayout_3->addWidget(comboBox_2);

        horizontalLayoutWidget_4 = new QWidget(frame_7);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(410, 20, 169, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit_20 = new QLineEdit(horizontalLayoutWidget_4);
        lineEdit_20->setObjectName(QStringLiteral("lineEdit_20"));
        lineEdit_20->setMaximumSize(QSize(100, 20));

        horizontalLayout_4->addWidget(lineEdit_20);

        pb_ok1_2 = new QPushButton(horizontalLayoutWidget_4);
        pb_ok1_2->setObjectName(QStringLiteral("pb_ok1_2"));

        horizontalLayout_4->addWidget(pb_ok1_2);

        frame1_4 = new QFrame(frame_7);
        frame1_4->setObjectName(QStringLiteral("frame1_4"));
        frame1_4->setGeometry(QRect(560, 320, 271, 71));
        frame1_4->setFrameShape(QFrame::StyledPanel);
        frame1_4->setFrameShadow(QFrame::Raised);
        lineEdit_21 = new QLineEdit(frame1_4);
        lineEdit_21->setObjectName(QStringLiteral("lineEdit_21"));
        lineEdit_21->setGeometry(QRect(10, 40, 101, 20));
        supprimerposte_2 = new QPushButton(frame1_4);
        supprimerposte_2->setObjectName(QStringLiteral("supprimerposte_2"));
        supprimerposte_2->setGeometry(QRect(150, 30, 91, 31));
        graphicsView_5 = new QGraphicsView(frame_7);
        graphicsView_5->setObjectName(QStringLiteral("graphicsView_5"));
        graphicsView_5->setGeometry(QRect(120, 10, 91, 61));
        graphicsView_5->setStyleSheet(QLatin1String("border-image: url(:/suppr.png);\n"
"\n"
"border-radius:10px;"));
        graphicsView_6 = new QGraphicsView(frame_7);
        graphicsView_6->setObjectName(QStringLiteral("graphicsView_6"));
        graphicsView_6->setGeometry(QRect(10, 10, 101, 61));
        graphicsView_6->setStyleSheet(QLatin1String("border-image: url(:/modif.png);\n"
"border-radius:10px;"));
        label_66 = new QLabel(frame_7);
        label_66->setObjectName(QStringLiteral("label_66"));
        label_66->setGeometry(QRect(580, 310, 221, 41));
        label_66->setFont(font4);
        label_66->setStyleSheet(QLatin1String("QLabel{\n"
"color: black;\n"
"\n"
"border: none;\n"
"}"));
        tabWidget_3->addTab(tab_3, QString());
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 951, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(1);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Date de naissance: ", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Identifiant :", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Poste:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Telephone", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "AJOUTER", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(ajouter), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Identifiant :", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Nom:", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Poste", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Prenom:", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Date de Naissance:", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Telephone", Q_NULLPTR));
        modifierchantier->setText(QApplication::translate("MainWindow", "MODIFIER", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Trier par :", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ID", Q_NULLPTR)
         << QApplication::translate("MainWindow", "nom", Q_NULLPTR)
         << QApplication::translate("MainWindow", "prenom", Q_NULLPTR)
         << QApplication::translate("MainWindow", "poste", Q_NULLPTR)
         << QApplication::translate("MainWindow", "telephone", Q_NULLPTR)
         << QApplication::translate("MainWindow", "dde", Q_NULLPTR)
        );
        lineEdit_18->setPlaceholderText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        pb_ok1->setText(QApplication::translate("MainWindow", "ok", Q_NULLPTR));
        label_65->setText(QApplication::translate("MainWindow", "Supprimer un employe ", Q_NULLPTR));
        lineEdit_19->setPlaceholderText(QApplication::translate("MainWindow", "Identifiant", Q_NULLPTR));
        supprimeremploye->setText(QApplication::translate("MainWindow", "SUPPRIMER", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(listedeschantiers), QApplication::translate("MainWindow", "Liste des employes", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(leschantiers), QApplication::translate("MainWindow", "Les employes", Q_NULLPTR));
        label_64->setText(QApplication::translate("MainWindow", "Ajouter une poste", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Horaire", Q_NULLPTR));
        label_58->setText(QApplication::translate("MainWindow", "Salaire:", Q_NULLPTR));
        label_54->setText(QApplication::translate("MainWindow", "Identifiant :", Q_NULLPTR));
        label_55->setText(QApplication::translate("MainWindow", "Grade:", Q_NULLPTR));
        label_56->setText(QApplication::translate("MainWindow", "Avantage:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "AJOUTER", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Avantage:", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "Salaire:", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Horaire:", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Grade:", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Identifiant :", Q_NULLPTR));
        modifierchantier_2->setText(QApplication::translate("MainWindow", "MODIFIER", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "Trier par :", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "id", Q_NULLPTR)
         << QApplication::translate("MainWindow", "grade", Q_NULLPTR)
         << QApplication::translate("MainWindow", "avantage", Q_NULLPTR)
         << QApplication::translate("MainWindow", "horaire", Q_NULLPTR)
         << QApplication::translate("MainWindow", "salaire", Q_NULLPTR)
        );
        lineEdit_20->setPlaceholderText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        pb_ok1_2->setText(QApplication::translate("MainWindow", "ok", Q_NULLPTR));
        lineEdit_21->setPlaceholderText(QApplication::translate("MainWindow", "Identifiant", Q_NULLPTR));
        supprimerposte_2->setText(QApplication::translate("MainWindow", "SUPPRIMER", Q_NULLPTR));
        label_66->setText(QApplication::translate("MainWindow", "Supprimer une poste ", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_3), QApplication::translate("MainWindow", "Liste des  postes", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Les Postes", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
