#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("Xayah");
	ClapTrap	b("Rakan");

	for (int i = 0; i < 15; i++)
	{
		a.attack("Rakan");
		b.takeDamage(0);
		b.beRepaired(5);
	}

	ClapTrap	c("Lucian");
	ClapTrap	d(c);
	ClapTrap	e("Senna");
	e = d;

	return (0);
}
