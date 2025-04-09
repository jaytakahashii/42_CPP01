#include "Zombie.hpp"

int main() {
  int N = 12;
  Zombie *horde = zombieHorde(N, "Zombie");

  if (horde) {
    for (int i = 0; i < N; i++) {
      horde[i].announce();
    }
  }
  delete[] horde;  // if not deleted, memory leak occurs

  return 0;
}
