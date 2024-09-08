#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <ostream>

class Rectangle {

  private:
    int len, bre;

  public:
    Rectangle(int l = 0, int b = 0) : len(l), bre(b) {}

    friend int area(const Rectangle& r);

    ~Rectangle() {}

};

int area(const Rectangle& r) {

  return (r.len * r.bre);

}

int main () {

  Rectangle r(5, 6);

  std::cout << "The area of the given rectangle is " << area(r) << std::endl;

  return EXIT_SUCCESS;

}
