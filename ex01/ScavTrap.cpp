#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string new_name ) {
	name = new_name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}
ClapTrap::~ClapTrap( void ) {

}

void ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << name << " attack " << target << "  causing " << attackDamage << " point of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << name << " get " << amount << "  damage! Now it is " << hitPoints << " hitpoints!" << std::endl;
	hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << name << " repared for " << amount << "! Now it is " << hitPoints << " hitpoints!" << std::endl;
	hitPoints += amount;
}