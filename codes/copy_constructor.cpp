#include <cstdlib>
#include <iostream>
#include <ostream>

class Point {

  private:
    int num;

  public:
    Point(int x = 0) : num(x) {}
    Point(Point& p) {
      this->num = p.num;
    }

    int get() {
      return num;
    }

    ~Point() {}

};

int main () {

  Point p1(59);
  Point p2(p1);

  std::cout << "Number 1 = " << p1.get() << std::endl;
  std::cout << "Number 2 = " << p2.get() << std::endl;

  return EXIT_SUCCESS;

}
