#include <cstdlib>
#include <iostream>
#include <ostream>

class factorial {

  private:
    int n;

  public:
    factorial(int x = 0) : n(x) {}

    int facVal() {

      int fac = 1;

      while (n != 0) {
        fac *= n;
        --n;
      }

      return fac;

    }

    ~factorial() {}

};

int main () {

  int n;

  std::cout << "Enter a number to find the factorial of: ";
  std::cin >> n;

  factorial f(n);

  std::cout << "The factorial of entered number is " << f.facVal() << std::endl;

  return EXIT_SUCCESS;

}
