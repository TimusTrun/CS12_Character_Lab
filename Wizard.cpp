#include "Wizard.h"
#include <iostream>
Wizard::Wizard(const string& n, double hp, double ad, int r):Character(WIZARD, n, hp, ad), rank(r){}

void Wizard::attack(Character& ch){
    if (ch.getType() == WIZARD){
        Wizard &opp = dynamic_cast<Wizard &>(ch);
        double wizDam = attackStrength *((double)rank/opp.rank);
        cout << "Wizard " << getName() << " attacks " << ch.getName() << " --- POOF!!" << endl << ch.getName() << " takes " << wizDam << " damage." << endl;
        ch.damage(wizDam);
    }
    else{
        cout << "Wizard " << getName() << " attacks " << ch.getName() << " --- POOF!!" << endl << ch.getName() << " takes " << attackStrength << " damage." << endl;
	ch.damage(attackStrength);
    } 
}