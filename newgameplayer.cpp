#include "newgameplayer.h"
#include "ui_newgameplayer.h"

NewGamePlayer::NewGamePlayer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewGamePlayer)
{
    ui->setupUi(this);

    QGraphicsScene *PlayerIconScen = new QGraphicsScene();
    PlayerIconScen->addPixmap(QPixmap(qApp->applicationDirPath() + "/PlayerIcons/HumanWarrior.png"));
    ui->PlayerIcon->setScene(PlayerIconScen);
    ui->tabWidget->setCurrentIndex(0);
}

NewGamePlayer::~NewGamePlayer()
{
    delete ui;
}

void NewGamePlayer::on_RaceComboBox_currentIndexChanged(int index)
{
    index = index;//только, чтобы убрать предупреждение
    ShowPlayerIcon();
}


void NewGamePlayer::on_ClassComboBox_currentIndexChanged(int index)
{
    index = index;//только, чтобы убрать предупреждение
    ShowPlayerIcon();
}

Player NewGamePlayer::GetNewPlayer()
{
        Player newPlayer;
        newPlayer.health = 100;
        newPlayer.mana =100;
        newPlayer.PClass = ui->ClassComboBox->currentIndex();
        newPlayer.PName = (char*)ui->PlayerName;
        newPlayer.PRace = ui->RaceComboBox->currentIndex();
        return newPlayer;
}

void NewGamePlayer::ShowPlayerIcon()
{
    QGraphicsScene *PlayerIconScen = new QGraphicsScene();
    if (ui->RaceComboBox->currentIndex() == 0)
    {
        if(ui->ClassComboBox->currentIndex()==0)
            PlayerIconScen->addPixmap(QPixmap(qApp->applicationDirPath() +\
                                              "/PlayerIcons/HumanWarrior.png"));
        else if(ui->ClassComboBox->currentIndex()==1)
            PlayerIconScen->addPixmap(QPixmap(qApp->applicationDirPath() + \
                                              "/PlayerIcons/HumanMage.png"));
        else if(ui->ClassComboBox->currentIndex()==2)
            PlayerIconScen->addPixmap(QPixmap(qApp->applicationDirPath() + \
                                              "/PlayerIcons/HumanHunter.png"));
    }
    else if (ui->RaceComboBox->currentIndex() == 1)
    {
        if(ui->ClassComboBox->currentIndex()==0)
            PlayerIconScen->addPixmap(QPixmap(qApp->applicationDirPath() + \
                                              "/PlayerIcons/OrcWarrior.png"));

        else if(ui->ClassComboBox->currentIndex()==1)
            PlayerIconScen->addPixmap(QPixmap(qApp->applicationDirPath() + \
                                              "/PlayerIcons/OrcMage.png"));
        else if(ui->ClassComboBox->currentIndex()==2)
            PlayerIconScen->addPixmap(QPixmap(qApp->applicationDirPath() + \
                                              "/PlayerIcons/OrcHunter.png"));
    }
    else if (ui->RaceComboBox->currentIndex() == 2)
    {
        if(ui->ClassComboBox->currentIndex()==0)
            PlayerIconScen->addPixmap(QPixmap(qApp->applicationDirPath() + \
                                              "/PlayerIcons/ElfWarrior.png"));
        else if(ui->ClassComboBox->currentIndex()==1)
            PlayerIconScen->addPixmap(QPixmap(qApp->applicationDirPath() + \
                                              "/PlayerIcons/ElfMage.png"));
        else if(ui->ClassComboBox->currentIndex()==2)
        {
            PlayerIconScen->addPixmap(QPixmap(qApp->applicationDirPath() + \
                                              "/PlayerIcons/ElfHunter.png"));
        }
    }
    ui->PlayerIcon->setScene(PlayerIconScen);
}

void NewGamePlayer::on_pushButton_2_clicked()
{
    ui->tabWidget->setCurrentIndex(ui->tabWidget->currentIndex()+1);
}

void NewGamePlayer::on_pushButton_11_clicked()
{
    ui->tabWidget->setCurrentIndex(ui->tabWidget->currentIndex()-1);
}
