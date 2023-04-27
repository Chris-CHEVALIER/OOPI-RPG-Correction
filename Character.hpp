#include <iostream>
#include "Weapon.hpp"
#pragma once 
using namespace std;
class Character
{
private:
    string name;
    int mana;
    int life;
    Weapon equipedWeapon;


public:
    Character();
    Character(string newName, int newLife, int newMana,string weaponName,int weaponDammages);
    Character(string newName, int newLife, int newMana , Weapon newWeapon);
    void receiveDammages(int dammages);
    void attack(Character &target);
    void takeLifePotion(int lifePoints);
    void switchWeapon(string weaponName, int weaponDammages);
    bool isAlive();
    void display();
    ~Character();
};
