#include "Harl.hpp"

void Harl::debug() {
  std::cout << "[ DEBUG ]\n"
            << "I love having extra bacon for my "
               "7XL-double-cheese-triple-pickle-special-ketchup burger.\n"
            << std::endl;
}

void Harl::info() {
  std::cout << "[ INFO ]\n"
            << "I cannot believe adding extra bacon costs more money. You "
               "didn't put enough bacon!\n"
            << std::endl;
}

void Harl::warning() {
  std::cout << "[ WARNING ]\n"
            << "I think I deserve to have some extra bacon for free.\n"
            << "I've been coming for years whereas you started working here "
               "since last month.\n"
            << std::endl;
}

void Harl::error() {
  std::cout << "[ ERROR ]\n"
            << "This is unacceptable, I want to speak to the manager now.\n"
            << std::endl;
}

void Harl::complain(std::string level) {
  std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  void (Harl::* functions[])() = {&Harl::debug, &Harl::info, &Harl::warning,
                                  &Harl::error};

  for (int i = 0; i < 4; i++) {
    if (level == levels[i]) {
      switch (i) {
        case 0:
          (this->*functions[0])();
        case 1:
          (this->*functions[1])();
        case 2:
          (this->*functions[2])();
        case 3:
          (this->*functions[3])();
          return;
      }
    }
  }
  std::cout << "[ Probably complaining about insignificant problems ]"
            << std::endl;
}
