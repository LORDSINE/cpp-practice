//C++ program that overloads operators (+, ++(prefin and postfix), <<, >>, >, <)

#include <iostream>

class Number {

  private:
    int num;

  public:
    Number(int x = 0) : num(x) {}

    Number operator+(const Number &n) {

      return (this->num + n.num);
      
    }

    //prefix ++
    Number operator++() {

      return ++(this->num);

    }

    //postfix ++
    Number operator++(int) {

      return (this->num)++;

    }

    bool operator>(const Number &n) {

      return (this->num > n.num);

    }

    bool operator<(const Number &n) {

      return (this->num < n.num);

    }

    friend std::ostream& operator<<(std::ostream& o, const Number &n) {

      o << "The number is " << n.num << std::endl;
      return o;

    }

    friend std::istream& operator>>(std::istream& i, Number &n) {

      i >> n.num;
      return i;

    }

};

  int main () {

    Number a(52), b(23) ,c, d;

    c = (++a) + (b++);

    std::cout << "Enter a number : ";
    std::cin >> d;

    if (a > d) {
      std::cout << "Number a is greater than Number d\n";
    } else if (a < d) {
      std::cout << "Number d is greater than Number a\n";
    } else {
      std::cout << "Number a is equal to Number d\n";
    }

    std::cout << a;
    std::cout << b;
    std::cout << c;
    std::cout << d;

    return EXIT_SUCCESS;

}
