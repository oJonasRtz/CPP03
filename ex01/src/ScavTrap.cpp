#include "ScavTrap.hpp"

#pragma region Constructors
	ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
	{
		std::cout << BRIGHT_GREEN "ScavTrap " << name << ": default constructor.\n" RESET;
		hitPts = 100;
		energyPts = 50;
		attackDmg = 20;
	}

	ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
	{
		std::cout << BRIGHT_GREEN "ScavTrap: copy operator.\n" RESET;
	}

	ScavTrap& ScavTrap::operator=(const ScavTrap &other)
	{
		std::cout << BRIGHT_GREEN "ScavTrap: assingment operator.\n" RESET;
		if (this != &other)
		{
			energyPts = other.energyPts;
			hitPts = other.hitPts;
			name = other.name;
			attackDmg = other.attackDmg;
		}
		return (*this);
	}

	ScavTrap::~ScavTrap(void)
	{
		std::cout << BRIGHT_RED "ScavTrap " << this->name << ": default destructor.\n" RESET; 
	}

	std::ostream &operator<<(std::ostream &out, const ScavTrap &other)
	{
		out << other.get_status();
		return (out);
	}

#pragma endregion

#pragma region Methods

void	ScavTrap::guardGate(void)
{
	if (!hitPts)
	{
		std::cout << ORANGE "ScavTrap " << name << " is dead.\n" RESET;
		return ;
	}
	std::cout << ORANGE << "ScavTrap " << name << ": is in Gate keeper mode\n" RESET;
}
void	ScavTrap::attack(const std::string &target)
{
	if (!hitPts)
	{
		std::cout << ORANGE "ScavTrap " << name << " is dead.\n" RESET;
		return ;
	}
	if (!energyPts)
	{
		std::cout << "ScavTrap " << *this << ": has no energy to attack.\n";
		return ;
	}
	std::cout << "ScavTrap " << *this << ": attacked " << target << " causing " << attackDmg << " damage\n";
}

#pragma endregion