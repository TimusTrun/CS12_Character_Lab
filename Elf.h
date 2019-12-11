#include "Character.h"

#ifndef __ELF_H__
#define __ELF_H__

class Elf : public Character{
    private:
        string family;
    public:
        Elf(const string& n, double hp, double ad, string fam);
        void attack(Character& ch);
};

#endif