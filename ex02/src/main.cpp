/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jay <jay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 00:03:12 by jay               #+#    #+#             */
/*   Updated: 2025/02/28 00:17:54 by jay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  std::cout << "Memory address of str            : " << &str << std::endl;
  std::cout << "Memory address held by stringPTR : " << stringPTR << std::endl;
  std::cout << "Memory address held by stringREF : " << &stringREF << std::endl;

  std::cout << "Value of str                     : " << str << std::endl;
  std::cout << "Value pointed by stringPTR       : " << *stringPTR << std::endl;
  std::cout << "Value pointed by stringREF       : " << stringREF << std::endl;

  return 0;
}
