#include <iostream>

int main(){
    char op;
    float x, y;

    std::cout <<"*********** Calculator ***********\n";
    std::cout<< "Enter the first number: ";
    std::cin>> x;
    std::cout<< "Enter either(+ - * /): ";
    std::cin>> op;
    std::cout<< "Enter the second number: ";
    std::cin>> y;
    switch(op){
        case '+': 
            std::cout<< x << op << y << "="<< x + y;
            break; 
        case '-': 
            std::cout<< x << op << y << "="<< x - y;
            break; 
        case '*': 
            std::cout<< x << op << y << "="<< x * y;
            break; 
        case '/': 
            std::cout<< x << op << y << "="<< x / y;
            break; 
        default: 
            std::cout<< "Enter a valid operation!";
            break; 
    }
        
    
    std::cout <<"\n**********************************";


}