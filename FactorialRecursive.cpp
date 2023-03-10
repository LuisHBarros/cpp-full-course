#include <iostream>

int factorial(int number);

int main(void){

    std::cout << factorial(6);

    return 0;
}

int factorial(int number){
    if(number > 1){
        return number *factorial(number -1);
    }
    else{
        return 1;
    }
}