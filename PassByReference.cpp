#include <iostream>

void swap(std::string &x, std::string &y);

int main(){
    std::string x = "Water";
    std::string y = "Fire";
    swap(x,y);
    std::cout << "X: "<< x << "\n";
    std::cout << "Y: "<< y << "\n";
}

void swap(std::string &x, std::string &y){
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}
