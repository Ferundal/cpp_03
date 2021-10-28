#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) {
	std::cout << "Deafult ScavTrap constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap( std::string new_name ) {
	std::cout << "DiamondTrap " << new_name << " constructor called!" << std::endl;
	name = new_name;
	ClapTrap::name = new_name + "_clap_name";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
}

DiamondTrap::DiamondTrap( const DiamondTrap& origin) {
	std::cout << "Copy DiamondTrap " << name << " constructor called!" << std::endl;
	name = origin.name;
	hitPoints = origin.hitPoints;
	energyPoints = origin.energyPoints;
	attackDamage = origin.attackDamage;
}

DiamondTrap& DiamondTrap::operator =(const DiamondTrap& origin) {
	std::cout << "Copy DiamondTrap " << name << "!" << std::endl;
	name = origin.name;
	hitPoints = origin.hitPoints;
	energyPoints = origin.energyPoints;
	attackDamage = origin.attackDamage;
	return *this;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamondTrap " << name << " desstructor called!" << std::endl;
}

void DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount) {
	hitPoints -= amount;
	std::cout << "DiamondTrap " << name << " get " << amount << " damage! Now it is " << hitPoints << " hitpoints!" << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount) {
	hitPoints += amount;
	std::cout << "DiamondTrap " << name << " repared for " << amount << "! Now it is " << hitPoints << " hitpoints!" << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap own name: " << name << std::endl;
	std::cout << "DiamondTrap ClapTrapName: " << ClapTrap::name << std::endl;
}