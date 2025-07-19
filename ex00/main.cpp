#include "ClapTrap.hpp"

#include <iostream>
#include <string>

int main(void) {
  ClapTrap a;
  a.attack("a random stranger");
  a.takeDamage(5);
  a.beRepaired(5);
  a.attack("another random stranger");

  ClapTrap b("Odin");
  b.attack("a random stranger");
  b.takeDamage(50);
  b.beRepaired(15);
  b.attack("another random stranger");

  ClapTrap c(a);
  c.attack("a random stranger");
  for (int i = 0; i < 10; i++)
    c.beRepaired(15);
  c.attack("another random stranger");

  ClapTrap d = c;
  d.attack("a random stranger");

  ClapTrap e("");
}
