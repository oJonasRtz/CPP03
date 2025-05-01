#include "FragTrap.hpp"

#pragma region Constructors
FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << BRIGHT_BLUE "FragTrap " << *this << ": Default constructor.\n" RESET;
	hitPts = 100;
	energyPts = 100;
	attackDmg = 30;
}
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << BRIGHT_BLUE "FragTrap " << *this << ": Copy operator.\n" RESET;
}
FragTrap& FragTrap::operator=(const FragTrap &other)
{
	std::cout << BRIGHT_BLUE "FragTrap " << *this << ": Assignment operator.\n" RESET;
	if (this != &other)
	{
		energyPts = other.energyPts;
		hitPts = other.hitPts;
		name = other.name;
		attackDmg = other.attackDmg;
	}
	return (*this);
}
FragTrap::~FragTrap()
{
	std::cout << BRIGHT_RED "FragTrap " << *this << ": Default destructor.\n" RESET;
}
std::ostream &operator<<(std::ostream &out, const FragTrap &other)
{
	out << other.get_status();
	return (out);
}
#pragma endregion

#pragma region Methods

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << *this << " wants to high five!\n";
}

#pragma endregion