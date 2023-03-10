#include <iostream>
double getTotal(double prices[], int size);

int main(void){
    double prices[] = {2.5, 3.5, 7.39, 10.39, 6, 7};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size);
    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}