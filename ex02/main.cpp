#include "ClapTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>
#include <string>

int main(void) {
  FragTrap a;
  a.attack("a random stranger");
  a.takeDamage(5);
  a.beRepaired(5);
  a.attack("another random stranger");
  a.highFivesGuys();

  FragTrap b("Odin");
  b.attack("a random stranger");
  b.takeDamage(50);
  b.beRepaired(15);
  b.attack("another random stranger");

  FragTrap c(a);
  c.attack("a random stranger");
  for (int i = 0; i < 10; i++)
    c.beRepaired(15);
  c.attack("another random stranger");

  FragTrap d = c;
  d.attack("a random stranger");

  FragTrap e("");
}
