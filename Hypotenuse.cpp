#include <iostream>
#include <cmath>


int main(){
    double x, y, z;
    std::cout<<"Enter the 2 cathetus of a triangle" << "\n";
    std::cout<<"first cathetus: ";
    std::cin>> x;
    std::cout<< "\n" << "second cathetus: ";
    std::cin >> y;
    z = sqrt(pow(x, 2) + pow(y, 2));
    std::cout<< "Hypotenuse equals: "<< z;

}