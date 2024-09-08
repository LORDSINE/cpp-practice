#include <cstdlib>
#include <iostream>

class Base {
  
  public:
    Base() {
      std::cout << "Base Constructor called\n";
    }

    void show() {
      std::cout << "Base shown!!!\n";
    }

    ~Base() {
      std::cout << "Base Destructor called\n";
    }

};

class Derived_1: virtual public Base {    //virtual base class is made to resolve the ambiguity caused due to diamond problem.

  public:
    Derived_1() {
      std::cout << "Derived_1 Constructor called\n";
    }

    ~Derived_1() {
      std::cout << "Derived_1 Destructor called\n";
    }

};

class Derived_2: virtual public Base {

  public:
    Derived_2() {
      std::cout << "Derived_2 Constructor called\n";
    }

    ~Derived_2() {
      std::cout << "Derived_2 Destructor called\n";
    }

};

class Child : public Derived_2, public Derived_1 {

  public:
    Child() {
      std::cout << "Child Constructor called\n";
    }

    ~Child() {
      std::cout << "Child Destructor called\n";
    }

};

int main () {

  Child c;
  c.show();

  return EXIT_SUCCESS;

}
