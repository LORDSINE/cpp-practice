//C++ program to manage exceptions in case of a division by zero scenario.

#include <iostream>
#include <exception>
#include <stdexcept>

double divide(int n, int d) {

  if (d == 0) {
    throw std::runtime_error("Divide by zero error.");
  } else {
    return static_cast<double>(n) / d ;
  }

}

int main() {

  int num, deno;
  double re;

  std::cout << "Enter numerator: ";
  std::cin >> num;

  std::cout << "Enter denominator: ";
  std::cin >> deno;

  try {

    re = divide(num, deno);

    std::cout << "The result of division is " << re << std::endl;

  } catch (std::exception& e) {

    std::cerr << "ERROR!!! " << e.what() << std::endl;

    return EXIT_FAILURE;

  }

  return EXIT_SUCCESS;

}
