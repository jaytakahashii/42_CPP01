#pragma once
#include <iostream>
#include <string>

#include "Weapon.hpp"
class HumanB {
 private:
  std::string _name;
  Weapon* _weapon;  // Pointer to a Weapon object

 public:
  HumanB(const std::string& name);
  void setWeapon(Weapon& newWeapon);
  void attack() const;
};
