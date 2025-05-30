#include "Zombie.hpp"

int main() {
  Zombie z1("StackZombie");  // instance on stack
  z1.announce();

  Zombie* z2 = newZombie("HeapZombie");  // instance on heap
  z2->announce();
  delete z2;  // manual destruct. if not deleted, memory leak occurs

  randomChump("RandomZombie");  // auto destruct

  return 0;
}
