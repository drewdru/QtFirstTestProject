#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "player.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_NewGameButton_clicked();

    void on_ContinueLoadButton_clicked();

    void on_LoadButton_clicked();

    void on_ExitButton_5_clicked();

    void on_SettingButton_clicked();

private:
    Ui::MainWindow *ui;
    Player* PCharacter;
};

#endif // MAINWINDOW_H
