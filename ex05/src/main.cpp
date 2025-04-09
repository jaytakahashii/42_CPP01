#include "Harl.hpp"

int main() {
  Harl harl;

  std::cout << "Testing each log level:" << std::endl;
  harl.complain("DEBUG");
  harl.complain("INFO");
  harl.complain("WARNING");
  harl.complain("ERROR");

  std::cout << "Testing unknown log level:" << std::endl;
  harl.complain("UNKNOWN");

  return 0;
}
