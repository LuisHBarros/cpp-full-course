#include <iostream>

int main(){
    int num, guess, tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "******** Guessing game ********";

    do{
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries ++;
        if (guess > num){
            std::cout << "To high!";
        }
        else if(guess < num){
            std::cout << "To low!";
        }
        else{
            std::cout << "Congratulations! Your guess is right!";
            break;
        }
    }while(tries >= 4);
    std::cout << "*******************************";

    return 0;

}