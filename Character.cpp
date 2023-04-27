#include "Character.hpp"
Character::Character()
{
    life, mana = 100;
    name = "";
}
Character::Character(string newName, int newLife, int newMana , string weaponName,int weaponDammages)
{
    name = newName;
    life = newLife;
    mana = newMana;
    Weapon newWeapon(weaponName,weaponDammages);
    equipedWeapon=newWeapon;
}
Character::Character(string newName, int newLife, int newMana , Weapon newWeapon)
{
    name = newName;
    life = newLife;
    mana = newMana;
    equipedWeapon=newWeapon;
}
void Character::receiveDammages(int dammages)
{
    if (life < 0)
    {
        life = 0;
    }
    life -= dammages;
}
void Character::attack(Character &target)
{
    target.receiveDammages(equipedWeapon.getDammages());
}
void Character::takeLifePotion(int lifePoints)
{
    if (life > 100)
    {
        life = 100;
    }
    life += lifePoints;
}
void Character::switchWeapon(string weaponName, int weaponDammages)
{
    equipedWeapon.change(weaponName,weaponDammages);
}
bool Character::isAlive()
{
    return life > 0;
}
void Character::display()
{
    cout << name << " a " << life << " points de vie et " << mana << " points de magie " << endl;
    cout << "Il est équipé de ";
    equipedWeapon.display();
}
Character::~Character()
{
}