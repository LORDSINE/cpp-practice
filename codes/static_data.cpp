#include <cstdlib>
#include <iostream>
#include <ostream>
#include <string>

class Car {
  private:
    std::string model;
    int year;
    static int count;

  public:
    Car(std::string name, int y) : model(name), year(y) {}

    void display() {

      std::cout << count++ << ".  " << model << "\t" << year <<std::endl;

    }
    
};

int Car::count = 1;

int main() {

  Car c1("Porsche", 1979);
  Car c2("Lamborghini", 2003);
  Car c3("Pagani", 2017);

  std::cout << "S.N Model\tYear\n";

  c1.display();
  c2.display();
  c3.display();

  return EXIT_SUCCESS;

}
