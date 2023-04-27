#include "Character.cpp"
#include "Weapon.cpp"
int main (){
    
    Weapon diamondSword("epee en diamants",50 );

    Character amadou ("Amadou",500,200,diamondSword);
    amadou.display();
    return 0;

}
