#include "Character.h"

#ifndef __WIZARD_H__
#define __WIZARD_H__

class Wizard : public Character{
    private:
        int rank;
    public:
        Wizard(const string& n, double hp, double ad, int r);
        void attack(Character& ch);
};

#endif