#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newgameplayer.h"
#include "settingsdialog.h"
#include "programsettings.h"
#include <QApplication>

extern ProgramSettings   programsettings;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ContinueLoadButton_clicked()
{

}

void MainWindow::on_NewGameButton_clicked()
{
    NewGamePlayer NewGame;
    if(NewGame.exec())
    {
        //код, если диалог закрыт accept()
        PCharacter = new Player(NewGame.GetNewPlayer());
    }
    else
    {
       //код, если диалог закрыт reject()
        return;
    }

}

void MainWindow::on_LoadButton_clicked()
{

}

void MainWindow::on_ExitButton_5_clicked()
{
    qApp->exit();
}

void MainWindow::on_SettingButton_clicked()
{
    settingsdialog setting;
    if(setting.exec())
    {
        //код, если диалог закрыт accept()
        programsettings.SetAudio(setting.GetAudio());
        char* fname = (char*)"./Save/Program.config";
        ofstream ConfOut(fname,ios::out|ios::trunc);
        ConfOut<<programsettings;
        ConfOut.close();
    }
    else
    {
       //код, если диалог закрыт reject()
        return;
    }
}
