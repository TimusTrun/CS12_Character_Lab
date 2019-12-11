#include "Character.h"

#ifndef __WARRIOR_H__
#define __WARRIOR_H__

class Warrior : public Character{
    private:
        string allegiance;
    public:
        Warrior(const string& n, double hp, double ad, string all);
        void attack(Character& ch);
};

#endif