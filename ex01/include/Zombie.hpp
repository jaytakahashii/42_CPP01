/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 23:10:51 by jay               #+#    #+#             */
/*   Updated: 2025/02/27 23:21:39 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie {
 private:
  std::string _name;

 public:
  Zombie();
  ~Zombie();

  void setName(std::string name);
  void announce() const;
};

Zombie *zombieHorde(int N, std::string name);
