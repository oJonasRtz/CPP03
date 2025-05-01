#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	a("Xayah");
	FragTrap	b("Rakan");

	a.attack(b.get_status());
	a.beRepaired(1);
	a.highFiveGuys();
	a.takeDamage(1);
	b.attack(a.get_status());
	b.beRepaired(1);
	b.highFiveGuys();
	b.takeDamage(1);
	return (0);
}
