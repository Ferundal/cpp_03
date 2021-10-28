#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
	std::cout << "Deafult ClapTrap constructor called!" << std::endl;
}

ClapTrap::ClapTrap( std::string new_name ) {
	std::cout << "ClapTrap " << new_name << " constructor called!" << std::endl;
	name = new_name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap& origin) {
	std::cout << "Copy ClapTrap" << name << " constructor called!" << std::endl;
	name = origin.name;
	hitPoints = origin.hitPoints;
	energyPoints = origin.energyPoints;
	attackDamage = origin.attackDamage;
}

ClapTrap& ClapTrap::operator =(const ClapTrap& origin) {
	std::cout << "Copy ClapTrap " << name << "!" << std::endl;
	name = origin.name;
	hitPoints = origin.hitPoints;
	energyPoints = origin.energyPoints;
	attackDamage = origin.attackDamage;
	return *this;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap " << name << " desstructor called!" << std::endl;
}

void ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << name << " attack " << target << " causing " << attackDamage << " point of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	hitPoints -= amount;
	std::cout << "ClapTrap " << name << " get " << amount << " damage! Now it is " << hitPoints << " hitpoints!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	hitPoints += amount;
	std::cout << "ClapTrap " << name << " repared for " << amount << "! Now it is " << hitPoints << " hitpoints!" << std::endl;
}