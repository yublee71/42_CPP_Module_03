#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap()
    : name_("Unknown"), hit_points_(10), energy_points_(10), attack_damage_(0) {
  std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : name_(name), hit_points_(10), energy_points_(10), attack_damage_(0) {
  std::cout << name_ << " has been created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : name_(other.name_), hit_points_(other.hit_points_),
      energy_points_(other.energy_points_),
      attack_damage_(other.attack_damage_) {
  std::cout << name_ << " has been copied with copy constructor." << std::endl;
}

ClapTrap::~ClapTrap() {
  std::cout << name_ << " has been destroyed." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &other) {
    this->name_ = other.name_;
    this->hit_points_ = other.hit_points_;
    this->energy_points_ = other.energy_points_;
    this->attack_damage_ = other.attack_damage_;
  }
  return *this;
}

void ClapTrap::attack(const std::string &target) {
  if (hit_points_ && energy_points_) {
    std::cout << "ClapTrap " << name_ << " attacks " << target << ", causing "
              << attack_damage_ << " points of damage!" << std::endl;
    energy_points_--;
  } else if (hit_points_ == 0) {
    std::cout << "ClapTrap " << name_ << " cannot attack cause he is dead."
              << std::endl;
  } else if (energy_points_ == 0) {
    std::cout << "ClapTrap " << name_
              << " cannot attack cause he is out of energy points."
              << std::endl;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (hit_points_ >= amount) {
    hit_points_ -= amount;
  } else if (hit_points_ > 0) {
    hit_points_ = 0;
  } else {
    std::cout << "ClapTrap " << name_ << " is already dead." << std::endl;
    return;
  }
  std::cout << "ClapTrap " << name_ << " loses " << amount << " hit points :/"
            << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (hit_points_ && energy_points_) {
    std::cout << "ClapTrap " << name_ << " recovers " << amount
              << " hit points! :)" << std::endl;
    hit_points_ += amount;
    energy_points_--;
  } else if (hit_points_ == 0) {
    std::cout << "ClapTrap " << name_ << " cannot be repaired cause he is dead."
              << std::endl;
  } else if (energy_points_ == 0) {
    std::cout << "ClapTrap " << name_
              << " cannot be repaired cause he is out of energy points."
              << std::endl;
  }
}
