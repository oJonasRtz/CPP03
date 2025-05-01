#include "ScavTrap.hpp"

#pragma region Constructors
	ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
	{
		std::cout << BRIGHT_GREEN "ScavTrap " << name << ": default constructor.\n" RESET;
	}

	ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
	{
		std::cout << BRIGHT_GREEN "ScavTrap: copy operator.\n" RESET;
	}

	ScavTrap& ScavTrap::operator=(const ScavTrap &other)
	{
		std::cout << BRIGHT_GREEN "ScavTrap: assingment operator.\n" RESET;
		if (this != &other)
			ClapTrap::operator=(other);
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