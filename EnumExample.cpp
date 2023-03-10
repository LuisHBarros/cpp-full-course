#include <iostream>

enum Day {
  sunday = 1,
  monday = 2,
  tuesday = 3,
  wednesday = 4,
  thursday = 5,
  friday = 6,
  saturday = 7
};

int main(void) {
  Day today = saturday;

  switch (today) {
  case 1:
    std::cout << "It is Sunday!\n";
    break;
  case 2:
    std::cout << "It is Monday!\n";
    break;
  case 3:
    std::cout << "It is Tuesday!\n";
    break;
  case 4:
    std::cout << "It is Wednesday!\n";
    break;
  case 5:
    std::cout << "It is Thursday!\n";
    break;
  case 6:
    std::cout << "It is Friday!\n";
    break;
  case 7:
    std::cout << "It is Saturday!\n";
    break;
  }
  return 0;
}