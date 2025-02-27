/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:24:53 by jay               #+#    #+#             */
/*   Updated: 2025/02/27 19:49:23 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::Zombie(std::string name) {
  this->_name = name;
}

Zombie::~Zombie() {
  std::cout << this->_name << " is dead." << std::endl;
}

void Zombie::announce() const {
  std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
