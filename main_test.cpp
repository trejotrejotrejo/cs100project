#include "character/character.hpp"
#include "character/BCOE.hpp"
#include "character/CHASS.hpp"
#include "character/CNAS.hpp"
#include "character/GSE.hpp"
#include "character/SB.hpp"
#include "character/SM.hpp"
#include "weapons/weapon.hpp"
#include "save/save.hpp"
#include "weapons/BCOE_Weapon.hpp"
#include "weapons/CHASS_Weapon.hpp"
#include "weapons/CNAS_Weapon.hpp"
#include "weapons/GSE_Weapon.hpp"
#include "weapons/SB_Weapon.hpp"
#include "weapons/SM_Weapon.hpp"
#include "Character_Factory/Character_Factory.hpp"
#include <iostream>

using namespace std;

int main(){
	ResetGame();	
	//Entity* player1 = new BCOE_Entity("Dylan", 3,1);
   	//Entity* player2 = new CHASS_Entity("David", 3,2);
	//Entity* player3 = new CNAS_Entity("Deez", 3,1);
	//Entity* player4 = new GSE_Entity("Bruh",2, 2);
	//Entity* player5 = new SB_Entity("Sheesh",7,2);
	//Entity* player6 = new SM_Entity("pp", 8, 1);
	//Weapon* weapon = new BCOE_Weapon(1);
	//weapon->weaponDetails();
	Entity_Factory* Factory = new CHASS_Factory();
	Entity* player1 = Factory->createEntity("Dylan", 6, 2);
	player1->showStats();
	
	//player1->showStats();
  	//player2->showStats();
	//player3->showStats();
	//player4->showStats();
	//player5->showStats();
	//player6->showStats();

	return 0;
}
