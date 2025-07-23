#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {
  name_ = "Unknown";
  ClapTrap::name_ += "_clap_name";
  energy_points_ = 50;
  std::cout << "[DiamondTrap] Default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name), ScavTrap(name), FragTrap(name) {
  name_ = name;
  ClapTrap::name_ += "_clap_name";
  energy_points_ = 50;
  std::cout << "[DiamondTrap] " << name_ << " has been created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other) {
  *this = other;
  std::cout << "[DiamondTrap] " << name_
            << " has been copied with copy constructor." << std::endl;
}

DiamondTrap::~DiamondTrap() {
  std::cout << "[DiamondTrap] " << name_ << " has been destroyed." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
  std::cout << "[DiamondTrap] Copy assignment operator called." << std::endl;
  if (this != &other) {
    this->name_ = other.name_;
    this->hit_points_ = other.hit_points_;
    this->energy_points_ = other.energy_points_;
    this->attack_damage_ = other.attack_damage_;
  }
  return *this;
}

void DiamondTrap::whoAmI() {
  std::cout << "[DiamondTrap] name:" << name_ << std::endl;
  std::cout << "[ClapTrap] name:" << ClapTrap::name_ << std::endl;
}
