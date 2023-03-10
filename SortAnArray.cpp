#include<iostream>

void sort(int array[], int size);

int main(void){
    int array[] = {10, 9, 1, 3, 5, 7, 4, 2, 6, 8};
    int size = sizeof(array)/sizeof(array[0]);
    sort(array, size);
}

void sort(int array[], int size){
    int aux;
    for (int i = 0; i < size -1; i++){
        for(int j = 0; j < size -1; j++){
             if(array[j] > array[j+1]){
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
             }
        }
    }
    for(int i = 0; i < size; i++){
        std::cout << array[i] << " ";
    }
}