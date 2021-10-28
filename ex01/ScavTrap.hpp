#ifndef _ClapTrap_hpp_
#define _ClapTrap_hpp_

# include <string>
# include <iostream>

class ClapTrap {
private:
	std::string		name;
	int				hitPoints;
	int				energyPoints;
	int				attackDamage;
public:
	ClapTrap( std::string new_name );
	~ClapTrap( void );

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
#endif