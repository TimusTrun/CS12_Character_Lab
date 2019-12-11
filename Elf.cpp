#include "Elf.h"
#include <iostream>
Elf::Elf(const string& n, double hp, double ad, string fam):Character(ELF, n, hp, ad), family(fam){}

void Elf::attack(Character& ch){
    double dam = (health/MAX_HEALTH)*attackStrength;
    if (ch.getType() == ELF){
        Elf &opp = dynamic_cast<Elf &>(ch);
        if(opp.family == family){
            cout << "Elf " << getName() << " does not attack Elf " << opp.getName() << "." << endl << "They are both members of the " << family << " family." << endl;
            return;
        }
        else {
            cout << "Elf " << getName() << " shoots an arrow at " << ch.getName() << " --- TWANG!!" << endl << ch.getName() << " takes " << dam << " damage." << endl;  
        }
    }
    else {
        cout << "Elf " << getName() << " shoots an arrow at " << ch.getName() << " --- TWANG!!" << endl << ch.getName() << " takes " << dam << " damage." << endl;
    }
    ch.damage(dam);
}