#include "ClapTrap.hpp"

//	Constructors/Destructor

ClapTrap::ClapTrap(const std::string &name)
{
	std::cout << BRIGHT_BLUE "Default constructor called.\n" RESET;
	this->name = name;
}
ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << BRIGHT_BLUE "Copy constructor called.\n" RESET;
	*this = other;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << BRIGHT_BLUE "Assignment operator called.\n" RESET;
	if (this != other)
		name = other.name;
	return (*this);
}
ClapTrap::~ClapTrap()
{
	std::cout << BRIGHT_RED "Destructor called.\n" RESET;
}


//	Methods

void	ClapTrap::attack(const std::string &target){}
void	ClapTrap::takeDamage(unsigned int amount){}
void	ClapTrap::beRepaired(unsigned int amount){}
