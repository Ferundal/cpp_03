#ifndef _FragTrap_hpp_
#define _FragTrap_hpp_

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
public:
	FragTrap( void );
	FragTrap( std::string new_name );
	FragTrap( const FragTrap& origin);
	FragTrap& operator =(const FragTrap& origin);

	~FragTrap( void );

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void highFivesGuys(void);
};

#endif