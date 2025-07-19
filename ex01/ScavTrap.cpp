#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap() : ClapTrap() {
  hit_points_ = 100;
  energy_points_ = 50;
  attack_damage_ = 20;
  std::cout << "[ScavTrap] Default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  hit_points_ = 100;
  energy_points_ = 50;
  attack_damage_ = 20;
  std::cout << "[ScavTrap] " << name_ << " has been created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
  std::cout << "[ScavTrap] " << name_
            << " has been copied with copy constructor." << std::endl;
  *this = other;
}

ScavTrap::~ScavTrap() {
  std::cout << "[ScavTrap] " << name_ << " has been destroyed." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  std::cout << "[ScavTrap] Copy assignment operator called" << std::endl;
  if (this != &other) {
    this->name_ = other.name_;
    this->hit_points_ = other.hit_points_;
    this->energy_points_ = other.energy_points_;
    this->attack_damage_ = other.attack_damage_;
  }
  return *this;
}

void ScavTrap::attack(const std::string &target) {
  if (hit_points_ && energy_points_) {
    std::cout << "[ScavTrap] " << name_ << " attacks " << target << ", causing "
              << attack_damage_ << " points of damage!" << std::endl;
    energy_points_--;
  } else if (hit_points_ == 0) {
    std::cout << "[ScavTrap] " << name_ << " cannot attack cause he is dead."
              << std::endl;
  } else if (energy_points_ == 0) {
    std::cout << "[ScavTrap] " << name_
              << " cannot attack cause he is out of energy points."
              << std::endl;
  }
}

void ScavTrap::guardGate(void) {
  std::cout << "[ScavTrap] " << name_ << " is now in Gate keeper mode."
            << std::endl;
}
