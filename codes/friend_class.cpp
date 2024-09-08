#include <cstdlib>
#include <iostream>
#include <ostream>

class Shape {

  private:
    double length, breadth, radius;

  public:
    Shape (double l, double b) : length(l), breadth(b), radius(0) {}
    Shape (double r) : length(0), breadth(0), radius(r) {}

    friend class Rectangle;
    friend class Circle;

};

class Rectangle {

  public:
    Rectangle() {}
    void area(const Shape &s) {

      std::cout << "The area of the rectangle is " << (s.length * s.breadth) << std::endl;

    }

};

class Circle {

  public:
    Circle() {}

    void area(const Shape &s) {

      std::cout << "The area of the circle is " << (3.14 * s.radius * s.radius) << std::endl;

    }

};

int main() {

  Shape rect(4.00, 9.00);
  Shape circ(5.42);

  Rectangle r;
  Circle c;

  r.area(rect);
  c.area(circ);

  return EXIT_SUCCESS;

}
