#ifndef _ScavTrap_hpp_
#define _ScavTrap_hpp_

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
public:
	ScavTrap( void );
	ScavTrap( std::string new_name );
	ScavTrap( const ScavTrap& origin);
	ScavTrap& operator =(const ScavTrap& origin);

	~ScavTrap( void );

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();
};

#endif