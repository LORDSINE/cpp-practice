//C++ program that shows te use of abstraction.

#include <iostream>

//abstract class
class Shape {

  public:
    virtual void draw() const = 0;
    virtual double area() const = 0;

    virtual ~Shape() {};

};

//concrete class
class Circle: public Shape {

  private:
    double radius;

  public:
    Circle (double r = 0) : radius(r) {};

    void draw() const override{
      std::cout << "Circle drawn!!!\n";
    }

    double area() const override{
      return (3.14 * radius * radius);
    }

};

//concrete class
class Rectangle: public Shape {

  private:
    double length, breadth;

  public:
    Rectangle (double l = 0, double b = 0) : length(l), breadth(b) {};

    void draw() const override{
      std::cout << "Rectangle drawn!!!\n";
    }

    double area() const override{
      return (length * breadth);
    }

};

int main () {

  Shape* s1 = new Circle(3.33);
  Shape* s2 = new Rectangle(3, 4);

  s1->draw();
  std::cout << "The area of circle is " << s1->area() << std::endl;

  s2->draw();
  std::cout << "The area of rectangle is " << s2->area() << std::endl;

  delete s1;
  delete s2;

  return EXIT_SUCCESS;

}

