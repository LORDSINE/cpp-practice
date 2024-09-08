//C++ program that has 3 classes called Food, TableInfo and BillAmount.

#include <iostream>
#include <ostream>
#include <string>

class Food {

  private:
    std::string DishName;
    double price;

  public:
    Food(std::string name = "", double p = 0.00) :
      DishName(name) , price(p) {}

    void setItem(std::string name, double p) {
      DishName = name;
      price = p;
    } 

    double getPrice() {
      return price;
    }

};

class TableInfo {

  protected:
    int TableNo;
    int size;
    Food* Menu = new Food[50];


  public:
    TableInfo(int no) : TableNo(no) {}
    
    void addFood(std::string food, double price, int orderNo) {

      Menu[orderNo].setItem(food, price);

    }

    virtual void getTotal() {}
    virtual void displayAmt() {}

    void setSize(int n) {
      size = n;
    }

    ~TableInfo() {
      delete[] Menu;
    }

};

class BillAmount : public TableInfo {

  private:
    double netAmt, VAT, ServiceCharge, grossAmt;

  public:
    BillAmount(int no) : TableInfo(no) {}

    void getTotal() {
      for (int i = 0; i < size; i++) {
        netAmt += Menu[i].getPrice();
      }

      VAT = 0.13 * netAmt;
      ServiceCharge = 0.1 * netAmt;
      grossAmt = netAmt + VAT + ServiceCharge;

    }

    void displayAmt() {

      std::cout << "The total bill amount for table no. " << TableNo << " is Rs." << grossAmt << std::endl;

    }

};

int main() {

  TableInfo* tbl[5];
  int no;

  for (int i = 0; i < 5; i++) {

    std::cout << "\n\nEnter table number : ";
    std::cin >> no;
    std::cin.ignore();

    tbl[i] = new BillAmount(no);

    char chk = 'y';
    int count = 1;

    while(chk == 'y') {

      std::string name = "";
      double price = 0.00;

      std::cout << "Enter the food item : ";
      std::getline(std::cin, name);

      std::cout << "Enter the price : ";
      std::cin >> price;

      tbl[i]->addFood(name, price, count++);

      std::cout << "Do you want to continue?(y/n) : ";
      std::cin >> chk;

      std::cout << "\n";

      std::cin.ignore();
      
    }

    tbl[i]->setSize(count);
    tbl[i]->getTotal();
    
  }

  for (int i = 0; i < 5; i++) {

    tbl[i]->displayAmt();
  
  }


  for (int i = 0; i < 5; i++) {
    delete tbl[i];
  }

  return EXIT_SUCCESS;
  
}
