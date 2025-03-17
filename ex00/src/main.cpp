#include "Zombie.hpp"

int main() {
  Zombie z1("StackZombie");
  z1.announce();  // auto destruct

  Zombie* z2 = newZombie("HeapZombie");
  z2->announce();
  delete z2;  // manual destruct

  randomChump("RandomZombie");  // auto destruct

  // Zombie z3; // error: Zombie Class has no default constructor

  return 0;
}
