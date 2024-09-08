#include <iostream>
#include <ostream>

class bmi {

  private:
    double weight, height;
    double bmi;

  public:
    //bmi (double w = 0.00, double h = 0.00) : weight(w), height(h) {}

    void scan_input() {

      std::cout << "Enter the weight in kilograms : ";
      std::cin >> weight;

      std::cout << "Enter the height in meters : ";
      std::cin >> height;

    }

    void process_input() {

      bmi = weight / (height * height);
      
    }

    void display_output() {

      std::cout << "\nThe bmi is " << bmi << std::endl;
    }

};

int main() {

  bmi b;

  b.scan_input();
  b.process_input();
  b.display_output();

  return EXIT_SUCCESS;

}
