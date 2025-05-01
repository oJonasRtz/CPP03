#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("oi");
	ScavTrap	b(a);
	ScavTrap	c("lala");

	c = b;
	return (0);
}
