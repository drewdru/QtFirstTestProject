#include "player.h"

Player::Player()
{

}

Player::Player(const Player &H)
{
    this->health = H.health;
    this->mana = H.mana;
    this->PClass = H.PClass;
    this->PName = H.PName;
    this->PRace = H.PRace;
}

QString Player::ClassName()
{    
    return "Player";
}
