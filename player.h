#ifndef PLAYER_H
#define PLAYER_H

#include "humanoid.h"

class Player : public Humanoid
{
private:
    void SetHumanoid();
public:
    int healthMax;//max количество жизней
    int manaMax;//max количество маны
    int concentration;//концентрация
    int concentrationMax;//max концентрация

    int Intelligence;//интелект
    int Strength;//сила
    int Agility;//ловкость
    int stamina;//выносливость

    Player();
    Player(const Player &H);
    virtual QString ClassName();
};

#endif // PLAYER_H
