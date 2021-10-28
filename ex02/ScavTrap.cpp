#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
	std::cout << "Deafult ScavTrap constructor called!" << std::endl;
}

ScavTrap::ScavTrap( std::string new_name ) {
	std::cout << "ScavTrap " << new_name << " constructor called!" << std::endl;
	name = new_name;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap& origin) {
	std::cout << "Copy ScavTrap " << name << " constructor called!" << std::endl;
	name = origin.name;
	hitPoints = origin.hitPoints;
	energyPoints = origin.energyPoints;
	attackDamage = origin.attackDamage;
}

ScavTrap& ScavTrap::operator =(const ScavTrap& origin) {
	std::cout << "Copy ScavTrap " << name << "!" << std::endl;
	name = origin.name;
	hitPoints = origin.hitPoints;
	energyPoints = origin.energyPoints;
	attackDamage = origin.attackDamage;
	return *this;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap " << name << " desstructor called!" << std::endl;
}

void ScavTrap::attack(std::string const & target) {
	std::cout << "ScavTrap " << name << " attack " << target << " causing " << attackDamage << " point of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	hitPoints -= amount;
	std::cout << "ScavTrap " << name << " get " << amount << " damage! Now it is " << hitPoints << " hitpoints!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	hitPoints += amount;
	std::cout << "ScavTrap " << name << " repared for " << amount << "! Now it is " << hitPoints << " hitpoints!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " now in Gate keeper mode!" << std::endl;
}