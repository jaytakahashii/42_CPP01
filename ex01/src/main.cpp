#include "Zombie.hpp"

int main() {
  Zombie *horde = zombieHorde(5, "Zombie");

  if (horde) {
    for (int i = 0; i < 5; i++) {
      horde[i].announce();
    }
  }
  delete[] horde;  // if not deleted, memory leak occurs
  return 0;
}
