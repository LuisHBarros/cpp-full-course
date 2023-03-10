#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(void){
    char player, computer;
    char playAgain;

    do{
    player = getUserChoice();
    std::cout<< "You choice: ";
    showChoice(player);
    computer = getComputerChoice();
    std::cout<< "Computer choice: ";
    showChoice(computer);
    chooseWinner(player, computer);
    std::cout<< "Press Y if you want to play again: ";
    std::cin >> playAgain;
    }while(playAgain == 'y' || playAgain == 'Y');

    return 0;
}

char getUserChoice(){
    std::cout << "Rock-Paper-Scissors Game!\n";
    char player;
    do{
    std::cout << "*************************\n";
    std::cout << "Choose one of the following:\n";
    std::cout << "'r' for rock\n";
    std::cout << "'p' for paper\n";
    std::cout << "'s' for scissors\n";
    std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

    return player;

}
char getComputerChoice(){
    srand(time(NULL));
    int num = rand() % 3 + 1;
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
}
void showChoice(char choice){
    switch(choice){
        case 'r': std::cout<< "Rock\n";
            break;
        case 'p': std::cout<< "Paper\n";
            break;
        case 's': std::cout<< "Scissors\n";
            break;            

    }
}
void chooseWinner(char player, char computer){
    switch(player){
        case 'r': 
            if(computer == 'r') std::cout << "It's a tie!\n";
            else if(computer == 'p') std::cout <<"You lose!\n";
            else std::cout << "You win!\n";
            break;
        case 'p':
            if(computer == 'p') std::cout << "It's a tie!\n";
            else if(computer == 's') std::cout <<"You lose!\n";
            else std::cout << "You win!\n";
            break;
        case 's':
            if(computer == 's') std::cout << "It's a tie!\n";
            else if(computer == 'r') std::cout <<"You lose!\n";
            else std::cout << "You win!\n";
            break;

    }
}