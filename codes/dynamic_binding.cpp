//C++ program that implements the use of dynamic casting

#include <iostream>

class Shape {

  public:
    virtual void draw() const = 0;

    virtual ~Shape() {}
    
};

class Rectangle : public Shape {

  private:
    double len, bre;

  public:
    Rectangle(int l = 0, int b = 0) : len(l), bre(b) {}

    void draw() const override {
      std::cout << "Rectangle drawn!!!" << std::endl;
    }

    void area() {
      std::cout << "The area of Rectangle is " << (len * bre) << std::endl;
    }

};

int main() {

  Shape* s = new Rectangle(2,3);
  
  s->draw();

  Rectangle* r = dynamic_cast<Rectangle*>(s);

  r->area();

  delete s;
  s = nullptr;

  return EXIT_SUCCESS;

}
