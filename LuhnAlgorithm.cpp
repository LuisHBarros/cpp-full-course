#include <iostream>

bool LuthAlgorithm(std::string cardNumber);


int main(void){
    std::string cardNumber;
    std::cin >> cardNumber;
    bool response = LuthAlgorithm(cardNumber);
    std::cout << "\n" << response;
    return 0;
}

bool LuthAlgorithm(std::string cardNumber){
    int sum = 0;
    int size = cardNumber.length();
    int aux, aux2;
    for(int i = size - 2; i >= 0; i -= 2){

        aux =  ((int)cardNumber[i] - '0') * 2;
        if (aux / 10 != 0){
            aux2 = aux / 10;
            sum += aux2;
            aux -= aux2 * 10;   
        }
        sum += aux;
    }
    for(int i = size -1; i >= 0; i -= 2){
        sum += (int)cardNumber[i] - '0';
    }
    if(sum % 10 == 0){
        std::cout<< "TRUE!";
        return 1;
    }
    std::cout << "FALSE!";
    return 0;
}
