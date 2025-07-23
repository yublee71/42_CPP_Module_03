#include "DiamondTrap.hpp"

#include <iostream>
#include <string>

int main(void) {
  DiamondTrap a("Odin");
  a.attack("a random stranger");
  a.takeDamage(5);
  a.beRepaired(5);
  a.guardGate();
  a.highFivesGuys();

  DiamondTrap b(a);
  b.attack("a random stranger");
  b.takeDamage(5);
  b.beRepaired(5);
  b.guardGate();
  b.highFivesGuys();

  DiamondTrap c = b;
  c.attack("a random stranger");
  c.takeDamage(5);
  c.beRepaired(5);
  c.guardGate();
  c.highFivesGuys();
}
