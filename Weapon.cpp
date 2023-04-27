#include "Weapon.hpp"
Weapon::Weapon()
{
    name = "baton";
    dammages = 10;
}
Weapon::Weapon(string newName, int newDammages)
{
    name = newName;
        dammages = newDammages;
}
void Weapon::change(string newName, int newDammages)
{
    name = newName;
        dammages = newDammages;
}
void Weapon::display()
{
    cout<<name<<" inflige "<<dammages<<" de degats"<<endl;
}
int Weapon::getDammages() const
{
    return dammages;
}