#include <stdlib.h>  // atoi

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
  if (N <= 0)
    // nullptr is unavailable in C++98, use NULL instead
    return NULL;

  Zombie *horde = new Zombie[N];  // Allocate N Zombies on the heap

  for (int i = 0; i < N; i++) {
    std::string strI = std::string(1, '1' + i);
    horde[i].setName(name + strI);
  }

  return horde;
}
