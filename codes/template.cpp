//C++ program that implements the use of class template and function template.

#include <cstdlib>
#include <iostream>

template <class t> class Number {

  private:
    t num;

  public:
    Number (t n = 0) : num(n) {}

    void set(t n) {
      num = n;
    }

    t get() {
      return num;
    }

    virtual ~Number() {}

};

template <typename t>
void process(Number<t> n[], int x) {

  for (int i = 0; i < x; i++) {
    for (int j = 0; j < x; j++) {
      if ( n[i].get() < n[j].get() ) {
        t temp = n[i].get();
        n[i].set(n[j].get());
        n[j].set(temp);
      }
    }
  }
  
}

template <typename t>
void display(Number<t> n[], int x) {

  std::cout << "{ ";
  for (int i = 0; i < x; i++) {
    std::cout << n[i].get() << ", ";
  }
  std::cout << "}\n";

}

int main() {

  Number<int>* in = new Number<int>[5];
  Number<double>* d = new Number<double>[5];
  Number<float>* f = new Number<float>[4];

  in[0].set(10);
  in[1].set(5);
  in[2].set(7);
  in[3].set(20);
  in[4].set(15);

  d[0].set(1.5);
  d[1].set(2.2);
  d[2].set(0.9);
  d[3].set(3.3);
  d[4].set(1.1);

  f[0].set(4.4f);
  f[1].set(2.2f);
  f[2].set(3.3f);
  f[3].set(1.1f);

  process(in, 5);
  std::cout << "The sorted integer array:";
  display(in, 5);

  process(d, 5);
  std::cout << "The sorted double array:"; 
  display(d, 5);

  process(f, 4);
  std::cout << "The sorted float array:";
  display(f, 4);

  delete[] in;
  delete[] d;
  delete[] f;

  return EXIT_SUCCESS;

}
