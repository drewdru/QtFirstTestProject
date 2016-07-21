#ifndef NEWGAMEPLAYER_H
#define NEWGAMEPLAYER_H

#include <QDialog>
#include "player.h"
namespace Ui {
class NewGamePlayer;
}

class NewGamePlayer : public QDialog
{
    Q_OBJECT

public:
    explicit NewGamePlayer(QWidget *parent = 0);
    ~NewGamePlayer();
Player GetNewPlayer();
private slots:
    void on_ClassComboBox_currentIndexChanged(int index);
    void on_RaceComboBox_currentIndexChanged(int index);

    void on_pushButton_2_clicked();

    void on_pushButton_11_clicked();

private:
    Ui::NewGamePlayer *ui;
    void ShowPlayerIcon();

};

#endif // NEWGAMEPLAYER_H
