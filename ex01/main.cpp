#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>
#include <string>

int main(void) {
  ScavTrap a;
  a.attack("a random stranger");
  a.takeDamage(5);
  a.beRepaired(5);
  a.attack("another random stranger");
  a.guardGate();

  ScavTrap b("Odin");
  b.attack("a random stranger");
  b.takeDamage(50);
  b.beRepaired(15);
  b.attack("another random stranger");

  ScavTrap c(a);
  c.attack("a random stranger");
  for (int i = 0; i < 10; i++)
    c.beRepaired(15);
  c.attack("another random stranger");

  ScavTrap d = c;
  d.attack("a random stranger");

  ScavTrap e("");
}
