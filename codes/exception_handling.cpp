//C++ program that returns out_of_bound error if the entered number is not in the range: 10 < n < 30

#include <iostream>
#include <stdexcept>

void chk(int n) {

  if (n < 10 || n > 30)
    throw std::out_of_range("ERROR!!!\nEntered number not in range.");

}

int main() {

  int n;

  std::cout << "Enter a number: ";
  std::cin >> n;

  try {

    chk(n);

    std::cout << "The number is within range.\n";

  } catch (const std::out_of_range &e) {

    std::cerr << e.what() << std::endl;

    return EXIT_FAILURE;

  }

  return EXIT_SUCCESS;

}
