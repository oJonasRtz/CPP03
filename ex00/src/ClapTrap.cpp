#include "ClapTrap.hpp"

//	Constructors/Destructor
#pragma region Constructor
ClapTrap::ClapTrap(const std::string &name)
{
	std::cout << BRIGHT_BLUE << "ClapTrap " << name << ": Default constructor called.\n" RESET;
	this->name = name;
	hitPts = 10;
	energyPts = 10;
	attackDmg = 0;
}
ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << BRIGHT_BLUE "Copy constructor called.\n" RESET;
	*this = other;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << BRIGHT_BLUE "Assignment operator called.\n" RESET;
	if (this != &other)
		name = other.name;
	return (*this);
}
ClapTrap::~ClapTrap()
{
	std::cout << BRIGHT_RED << "ClapTrap " << name << ": Destructor called.\n" RESET;
}
int		ClapTrap::get_status(void) const
{
	return (energyPts);
}
std::ostream& operator<<(std::ostream &out, const ClapTrap &other)
{
	out << other.get_status();
	return (out);
}
#pragma endregion

//	Methods
#pragma region Methods
void	ClapTrap::attack(const std::string &target)
{
	if (!energyPts)
	{
		std::cout << ORANGE "ClapTrap " << name << " has no energy to attack!\n" RESET; 
		return ;
	}
	std::cout << "ClapTrap " << name << " attacks " << target;
	std::cout << " causing " << attackDmg << " points of damage!\n";
	energyPts--;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " took " << amount << " damage!\n";
	hitPts -= amount;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!energyPts)
	{
		std::cout << ORANGE "ClapTrap " << name << " has no energy to repair!\n" RESET; 
		return ;
	}
	std::cout << "ClapTrap " << name << " repaired " << amount << " hit points!\n";
	energyPts--;
	hitPts += amount;
}
#pragma endregion