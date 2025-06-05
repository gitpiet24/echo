#include <iostream>
#include <string>

int main() {
  std::string line;
  if (std::getline(std::cin, line)){
    std::cout << line << std::endl;
  }
  return 0;
}
