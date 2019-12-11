#include "Warrior.h"
#include <iostream>
// class Warrior : public Character{
//     private:
//         string allegiance;
//     public:
//         Warrior(HeroType t, const string& n, double hp, double ad, string& all);
// //         Warrior(HeroType t, const string& n, double hp, double ad, string& all): Character(t, n, hp, ad), allegiance(all) {}
//         void attack(Character& ch) override;
// //         void attack (Character& ch) override{ 
// //             ch.damage((health/MAX_HEALTH)*attackStrength)
// //         }
// };

Warrior::Warrior(const string& n, double hp, double ad, string all):Character(WARRIOR, n, hp, ad), allegiance(all){}

void Warrior::attack(Character& ch){
    double dam = attackStrength*(health/MAX_HEALTH);
    if (ch.getType() == WARRIOR){
        Warrior &opp = dynamic_cast<Warrior &>(ch);
        if(opp.allegiance == allegiance){
            cout << "Warrior " << getName() << " does not attack Warrior " << opp.getName() << "." << endl << "They share an allegiance with " << allegiance << "." << endl;
            return;
        }
        else {
            cout << "Warrior " << getName() << " attacks " << ch.getName() << " --- SLASH!!" << endl << ch.getName() << " takes " << dam << " damage." << endl;  
        }
    }
    else {
        cout << "Warrior " << getName() << " attacks " << ch.getName() << " --- SLASH!!" << endl << ch.getName() << " takes " << dam << " damage." << endl;
    }
    ch.damage(dam);
}