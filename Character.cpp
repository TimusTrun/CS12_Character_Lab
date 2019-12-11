#include "Character.h"

// class Character {
//  protected:
// 	HeroType type;
// 	string name;
// 	double health;
// 	double attackStrength;

//  public:
//  	Character(HeroType, const string &, double, double);
//  	HeroType getType() const;
//  	const string & getName() const;
//  	int getHealth() const;
//  	void setHealth(double h);
//  	void damage(double d);
//  	bool isAlive() const;
//  	virtual void attack(Character &) = 0;
//  };

Character::Character(HeroType t, const string& n, double hp, double ad): type(t), name(n), health(hp), attackStrength(ad) {}

HeroType Character::getType() const{
    return type;
}

const string& Character::getName() const{
    return name;
}

int Character::getHealth() const{
    return static_cast<int>(health);
}

void Character::setHealth(double h){
    health = h;
}

void Character::damage(double d){
    health -= d;
}

bool Character::isAlive() const{
    if (health <= 0)
        return false;
    else
        return true;
}