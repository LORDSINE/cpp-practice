#include <iostream>
#include <string>

class Person {

  protected:
    std::string name;

  public:
    Person(std::string name) : name(name) {};

    void show() {
      std::cout << "Name\t: " << name << std::endl;
    }

};

//single inheritance
class Student : public Person {

  private:
    int stdId;
    std::string schoolName;

  public:
    Student(std::string name, std::string school, int id) : Person(name), schoolName(school), stdId(id) {};

    void stdDetails() {

      show();
      std::cout << "School\t: " << schoolName << std::endl;
      std::cout << "Student ID\t: " << stdId << std::endl;

    }

};

class Employee {

  private:
    std::string company;
    int empId;

  public:
    Employee(std::string comp, int id) : company(comp), empId(id) {};

    void empDetails() {

      std::cout << "Company\t: " << company << std::endl;
      std::cout << "Employee ID\t: " << empId << std::endl;

    }

};

//hybrid inheritance (multiple inheritance where one base class is single inherited)
class workingStudent : public Student, public Employee {

  public:
    workingStudent(std::string name, std::string school, std::string company, int stdId, int empId) : Student(name, school, stdId), 
                                                                                                      Employee(company, empId) {}

    void Details() {

      stdDetails();
      empDetails();

    }

};

int main() {

  workingStudent man("John Doe", "Divine Public School", "Google", 11823, 531);

  man.Details();

  return EXIT_SUCCESS;

}
