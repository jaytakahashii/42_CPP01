#include <fstream>
#include <iostream>
#include <string>

#include "color.hpp"

void replaceString(std::string& content, const std::string& s1,
                   const std::string& s2) {
  size_t pos = 0;
  while ((pos = content.find(s1, pos)) != std::string::npos) {
    content.erase(pos, s1.length());
    content.insert(pos, s2);
    pos += s2.length();
  }
}

int main(int argc, char* argv[]) {
  if (argc != 4) {
    std::cerr << RED "Error: " RESET
              << "Invalid number of arguments. Usage: ./SedIsForLosers "
                 "<filename> <s1> <s2>"
              << std::endl;
    return 1;
  }

  std::string filename = argv[1];
  std::string s1 = argv[2];
  std::string s2 = argv[3];

  std::ifstream inFile(filename.c_str());
  if (!inFile) {
    std::cerr << RED "Error: " RESET << "Could not open file '" << filename
              << "'" << std::endl;
    return 1;
  }

  std::ofstream outFile((filename + ".replace").c_str());
  if (!outFile) {
    std::cerr << "Error: Could not create output file." << std::endl;
    return 1;
  }

  std::string content((std::istreambuf_iterator<char>(inFile)),
                      std::istreambuf_iterator<char>());
  replaceString(content, s1, s2);

  outFile << content;

  std::cout << "Replacement complete: " << filename << " -> " << filename
            << ".replace" << std::endl;

  return 0;
}
