#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
	{
		ClapTrap small_trap("SmallClapTrap");
		small_trap.attack("Deamon");
		small_trap.takeDamage(5);
		small_trap.beRepaired(3);
	}
	{
		ScavTrap big_trap("BigScavTrap");
		big_trap.attack("Deamon");
		big_trap.takeDamage(5);
		big_trap.beRepaired(3);
		big_trap.guardGate();
	}
	{
		FragTrap big_trap("PositiveFragTrap");
		big_trap.attack("Deamon");
		big_trap.takeDamage(5);
		big_trap.beRepaired(3);
		big_trap.highFivesGuys();
	}
}