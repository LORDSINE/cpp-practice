#include <iostream>

void swap(int &x, int &y) {
  
  int temp = x;
  x = y;
  y = temp;

}

int main() {

  int x = 4, y = 9;

  std::cout << "Before swapping:\nx = " << x << "\ny = " << y << std::endl;

  swap(x,y);

  std::cout << "After swapping:\nx = " << x << "\ny = " << y << std::endl;

  return EXIT_SUCCESS;

}
