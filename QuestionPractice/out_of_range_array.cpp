//C++ program to handle out_of_range_array_subscript.

#include <cstdlib>
#include <exception>
#include <iostream>
#include <ostream>
#include <stdexcept>

class Array {

  private:
    int size;
    int* ar;

  public:
    Array(int s) : size(s), ar(new int[size]) {}

    ~Array() {
      delete[] ar;
    }

    int& operator[](int index) noexcept(false) {

      if (index >= size) {
        throw std::out_of_range("The given index is out of the range of array.");
      } else {
        return ar[index];
      }

    }

    const int& operator[](int index) const{

      if (index >= size) {
        throw std::out_of_range("The given index is out of the range of array.");
      } else {
        return ar[index];
      }

    }

    const int size_() {
      return size;
    }

};

int main () {

  try {

    Array a(5);

    for (int i = 0; i < a.size_(); i++) {
      a[i] = static_cast<int>(i*5);
    }

    //Accessing element within range.
    std::cout << "Element at index 3: " << a[3] << std::endl;

    //Accessing element outside of the range.
    std::cout << "Element at index 7: " << a[7] <<std::endl;

  } catch(std::exception &e) {
    std::cerr << "ERROR!!!\n" << e.what() << std::endl;
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;

}
