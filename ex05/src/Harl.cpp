#include "Harl.hpp"

#include <iostream>

#include "color.hpp"

void Harl::debug(void) {
  std::cout << "[DEBUG]" << " I love having extra bacon on my burger!"
            << std::endl;
}

void Harl::info(void) {
  std::cout << BLUE "[INFO]" RESET
            << " Extra bacon costs money. You should add more!" << std::endl;
}

void Harl::warning(void) {
  std::cout << YELLOW "[WARNING]" RESET << " I deserve free extra bacon!"
            << std::endl;
}

void Harl::error(void) {
  std::cout << RED "[ERROR]" RESET << " This is unacceptable!" << std::endl;
}

void Harl::complain(std::string level) {
  std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  void (Harl::* functions[4])(void) = {&Harl::debug, &Harl::info,
                                       &Harl::warning, &Harl::error};

  for (int i = 0; i < 4; i++) {
    if (level == levels[i]) {
      (this->*functions[i])();
      return;
    }
  }
  std::cout << "[UNKNOWN LEVEL] No such complaint level." << std::endl;
}
