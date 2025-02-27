/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 23:10:51 by jay               #+#    #+#             */
/*   Updated: 2025/02/27 23:10:53 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie {
 private:
  std::string _name;

 public:
  Zombie(std::string name);
  ~Zombie();

  void announce() const;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);
