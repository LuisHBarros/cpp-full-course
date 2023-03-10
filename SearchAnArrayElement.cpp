#include<iostream>

int searchArray(int array[], int size, int element);

int main(void){
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter element to search for: \n";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);
    if(index == -1) std::cout << "This element cannot be found\n";
    else{
        std::cout << "The index of "<< myNum << " is " << index;
    }
    return 0;
}

int searchArray(int array[], int size, int element){
    for(int i = 0; i < size; i++){
        if(element == array[i]) return i;
    }
    return -1;
}