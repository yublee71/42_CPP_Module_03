#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <string>

class DiamondTrap : public FragTrap, public ScavTrap {
public:
  DiamondTrap();
  DiamondTrap(std::string name);
  DiamondTrap(const DiamondTrap &other);
  ~DiamondTrap();

  DiamondTrap &operator=(const DiamondTrap &other);

  using ScavTrap::attack;
  void whoAmI();

private:
  std::string name_;
};

#endif
