#ifndef _DiamondTrap_hpp_
#define _DiamondTrap_hpp_

# include <string>
# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string		name;
public:
	DiamondTrap( void );
	DiamondTrap( std::string new_name );
	DiamondTrap( const DiamondTrap& origin);
	DiamondTrap& operator =(const DiamondTrap& origin);

	~DiamondTrap( void );

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void whoAmI();
};

#endif