#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
	std::cout << "Deafult FragTrap constructor called!" << std::endl;
}

FragTrap::FragTrap( std::string new_name ) {
	std::cout << "FragTrap " << new_name << " constructor called!" << std::endl;
	name = new_name;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap& origin) {
	std::cout << "Copy FragTrap " << name << " constructor called!" << std::endl;
	name = origin.name;
	hitPoints = origin.hitPoints;
	energyPoints = origin.energyPoints;
	attackDamage = origin.attackDamage;
}

FragTrap& FragTrap::operator =(const FragTrap& origin) {
	std::cout << "Copy FragTrap " << name << "!" << std::endl;
	name = origin.name;
	hitPoints = origin.hitPoints;
	energyPoints = origin.energyPoints;
	attackDamage = origin.attackDamage;
	return *this;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap " << name << " desstructor called!" << std::endl;
}

void FragTrap::attack(std::string const & target) {
	std::cout << "FragTrap " << name << " attack " << target << " causing " << attackDamage << " point of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	hitPoints -= amount;
	std::cout << "FragTrap " << name << " get " << amount << " damage! Now it is " << hitPoints << " hitpoints!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	hitPoints += amount;
	std::cout << "FragTrap " << name << " repared for " << amount << "! Now it is " << hitPoints << " hitpoints!" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << name << " ask you to give a five, becouse you are avesome!" << std::endl;
}