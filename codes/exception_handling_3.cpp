//C++ program using exception handling that returns welcome message if the user inputs string else it prints out a error message.

#include <iostream>
#include <cctype>
#include <string>
#include <stdexcept>
#include <exception>

int isNum(std::string msg) {

  if (msg == "") {
    return 0;
  }

  for (char c : msg) {
    if (!std::isdigit(c)) {
      return 2;
    }
  }
  return 1;
}

void process(std::string msg) {

  int n;

  n = isNum(msg);

  if (n == 0) {
    throw std::invalid_argument("Nothing entered...\n");
  } else if (n == 1){
    throw std::invalid_argument("Numeric value entered...\n");
  } else {}

}

int main () {

  std::string msg;
  
  std::cout << "Enter string : ";
  std::getline(std::cin, msg);

  try {
    process(msg);

    std::cout << "Welcome!!!\n";

  } catch (std::exception &e) {
    std::cerr << "ERROR!!!\n" << e.what();
  }

}
