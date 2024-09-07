#include <cstdlib>
#include <iostream>
#include <ostream>

class Base {

  private:
    int priVar;

  protected:
    int proVar;

  public:
    int pubVar;

    Base(): priVar(1), proVar(2), pubVar(3) {}

    void showBase() {

      std::cout << "Base class members:\n";
      std::cout << "Private member = " << priVar << "\nProtected member = " << proVar << "\nPublic member = " << pubVar << std::endl;

    }

};

class pubDer: public Base {

  public:

    void show_pubDer() {

      std::cout << "\nPublicly derived class members:\n";
      std::cout << "Public member = " << pubVar << std::endl;
      std::cout << "Protected member = " << proVar << std::endl;
      // std::cout << "Private member = " << priVar << std::endl;   (Private member is not inherited)
      
    }
 
};

class proDer: protected Base {

  public:

    void show_proDer() {

      std::cout << "\nProtectively derived class members:\n";
      std::cout << "Public member (becomes protected) = " << pubVar << std::endl;
      std::cout << "Protected member = " << proVar << std::endl;
      // std::cout << "Private member = " << priVar << std::endl;  (Private member is not inherited)
      
    }
 
};

class priDer: public Base {

  public:

    void show_priDer() {

      std::cout << "\nPrivately derived class members:\n";
      std::cout << "Public member (becomes private) = " << pubVar << std::endl;
      std::cout << "Protected member (becomes private) = " << proVar << std::endl;
      // std::cout << "Private member = " << priVar << std::endl;    (Private member is not inherited)
      
    }
 
};

int main () {

  Base b;

  pubDer d1;
  proDer d2;
  priDer d3;

  b.showBase();

  d1.show_pubDer();
  d2.show_proDer();
  d3.show_priDer();

  return EXIT_SUCCESS;

}
