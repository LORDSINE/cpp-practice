//C++ program that demostrates the use of re-throwing an exception.

#include <exception>
#include <iostream>
#include <stdexcept>

void chk1(int n) noexcept(false) {
  if (n < 0) {
    throw std::runtime_error("Negative number!!!");
  } else {
    throw std::runtime_error("Out of range!!!(smaller than least value of range)");
  }
}

void chk2(int n) noexcept(false) {
  if (n < 40) {
    std::cout << "Number is within range!!!" << std::endl;
  } else {
    throw std::runtime_error("Out of range!!!(larger than greatest value of range)");
  }
}

void process(int n) noexcept(false) {

  try {
    if (n < 20) {
      chk1(n);
    } else {
      chk2(n);
    }
  } catch (std::exception &e) {
    throw;
  }
}

int main () {

    int n;

    std::cout << "Enter a number(within range 20 - 40) : ";
    std::cin >> n;

    try {

      process(n);

    } catch (std::exception &e) {
      
      std::cerr << e.what() << std::endl;

      return EXIT_FAILURE;

    }

    return EXIT_SUCCESS;

}
