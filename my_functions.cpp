#include <iostream>
#include <vector>
#include <cmath>
#include "my_functions.hpp"

void updateBoard(std::string loc) {

  std::cout << "    a     b     c  " << "\n";
  std::cout << "       |     |     " << "\n";
  std::cout << "1      |     |     " << "\n";
  std::cout << "  _____|_____|_____" << "\n";
  std::cout << "       |     |     " << "\n";
  std::cout << "2      |     |     " << "\n";
  std::cout << "  _____|_____|_____" << "\n";
  std::cout << "       |     |     " << "\n";
  std::cout << "3      |     |     " << "\n";
  std::cout << "       |     |     " << "\n";

  std::cout << "" << loc << "\n";
}
void displayEmptyBoard() {
  std::cout << "\n";
}
