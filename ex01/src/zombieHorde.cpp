/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 23:11:29 by jay               #+#    #+#             */
/*   Updated: 2025/02/27 23:34:51 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
