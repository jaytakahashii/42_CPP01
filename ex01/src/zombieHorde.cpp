#include <stdlib.h>  // atoi

#include "Zombie.hpp"

static std::string ft_to_string(int n) {
  std::ostringstream oss;
  oss << n;
  return oss.str();
}

Zombie *zombieHorde(int N, std::string name) {
  if (N <= 0)
    // nullptr is unavailable in C++98, use NULL instead
    return NULL;

  Zombie *horde = new Zombie[N];  // Allocate N Zombies on the heap

  for (int i = 0; i < N; i++) {
    std::string strI = ft_to_string(i + 1);
    horde[i].setName(name + strI);
  }

  return horde;
}
