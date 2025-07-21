#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap() : ClapTrap() {
  hit_points_ = 100;
  energy_points_ = 100;
  attack_damage_ = 30;
  std::cout << "[FragTrap] Default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  hit_points_ = 100;
  energy_points_ = 100;
  attack_damage_ = 30;
  std::cout << "[FragTrap] " << name_ << " has been created." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
  std::cout << "[FragTrap] " << name_
            << " has been copied with copy constructor." << std::endl;
  *this = other;
}

FragTrap::~FragTrap() {
  std::cout << "[FragTrap] " << name_ << " has been destroyed." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
  std::cout << "[FragTrap] Copy assignment operator called." << std::endl;
  if (this != &other) {
    this->name_ = other.name_;
    this->hit_points_ = other.hit_points_;
    this->energy_points_ = other.energy_points_;
    this->attack_damage_ = other.attack_damage_;
  }
  return *this;
}

void FragTrap::highFivesGuys(void) {
  std::cout << "[FragTrap] " << name_ << " says 'Up Top!'." << std::endl;
}
