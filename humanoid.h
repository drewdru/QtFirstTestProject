#ifndef HUMANOID_H
#define HUMANOID_H
#include <QString>
class Humanoid
{
public:
    char* PName;//имя
    int PRace;//Раса, 1=челове,2=орк,3=эльф
    int PClass;//Класс, 1=воин,2=маг,3=охотник
    int health;//текущее количество жизней
    int mana;//текущее количество маны

    virtual QString ClassName() = 0;
};

#endif // HUMANOID_H
