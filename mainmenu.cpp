#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "morsetranslatortests.h"

MainMenu::MainMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    ui->menuStack->setCurrentIndex(0); // Start on the Main Menu

    MorseTranslatorTests test;
    test.runTests();
}

MainMenu::~MainMenu()
{
    delete ui;
}


void MainMenu::on_studyButton_clicked()
{
    ui->menuStack->setCurrentIndex(1); // Switch to Study menu
}


void MainMenu::on_menuButton_clicked()
{
    ui->menuStack->setCurrentIndex(0); // Switch to Main Menu
}

