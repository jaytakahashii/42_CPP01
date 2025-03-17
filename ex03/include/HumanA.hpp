#pragma once
#include <iostream>
#include <string>

#include "Weapon.hpp"

class HumanA {
 private:
  std::string _name;
  Weapon& _weapon;  // Reference to a Weapon object

 public:
  HumanA(const std::string& name, Weapon& weapon);
  void attack() const;
};
