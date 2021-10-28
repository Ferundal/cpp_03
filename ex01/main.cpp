#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap big_trap("BigTrap");
	big_trap.attack("Deamon");
	big_trap.takeDamage(5);
	big_trap.beRepaired(3);
}