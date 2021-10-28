#include "DiamondTrap.hpp"

int main( void ) {
	{
		DiamondTrap ExelentTrap ("DianondExelentTrap");
		ExelentTrap.attack("Deamon");
		ExelentTrap.takeDamage(5);
		ExelentTrap.beRepaired(3);
		ExelentTrap.whoAmI();
		ExelentTrap.highFivesGuys();
		ExelentTrap.guardGate();
	}
}