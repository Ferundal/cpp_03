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
	ClapTrap( void );
	ClapTrap( std::string new_name );
	ClapTrap( const ClapTrap& origin);
	ClapTrap& operator =(const ClapTrap& origin);

	~ClapTrap( void );

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif