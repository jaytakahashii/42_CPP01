/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:24:44 by jay               #+#    #+#             */
/*   Updated: 2025/02/27 20:13:02 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
  Zombie z1("StackZombie");
  z1.announce();  // auto destruct

  Zombie* z2 = newZombie("HeapZombie");
  z2->announce();
  delete z2;  // manual destruct

  randomChump("RandomZombie");  // auto destruct

  return 0;
}
