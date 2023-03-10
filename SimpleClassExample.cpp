#include <iostream>

class Student {
private:
  std::string name;
  int age;
  double gpa;

public:
  Student(std::string name, int age, double gpa) {
    this->name = name;
    this->age = age;
    this->gpa = gpa;
  }
  void print() {
    std::cout << "\nname: " << name;
    std::cout << "\nage: " << age;
    std::cout << "\ngpa: " << gpa;
  }
};

int main() {
  Student student1("Luis", 21, 6.5);
  student1.print();
  return 0;
}