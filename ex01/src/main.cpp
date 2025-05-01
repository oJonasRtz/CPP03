#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("Xayah");
	ScavTrap	b("Rakan");

	a.guardGate();
	b.guardGate();
	for (int i = 0; i < 6; i++)
	{
		a.attack("Rakan");
		b.takeDamage(a.get_damage());
		// b.beRepaired(2);
	}
	a.guardGate();
	b.guardGate();
	return (0);
}
