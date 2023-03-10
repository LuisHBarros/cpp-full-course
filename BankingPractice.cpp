#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);


int main(){
    double balance = 0;
    int choice = 0;


    do{
    std::cout << "******************\n";
    std::cout << "Enter your choice:\n";
    std::cout << "******************\n";
    std::cout << "1. Show your balance\n";
    std::cout << "2. Deposit money\n";
    std::cout << "3. Withdraw Money\n";
    std::cout << "4. Exit\n";
    std::cin >> choice;

    std::cin.clear();
    fflush(stdin);

    switch(choice){
        case 1: showBalance(balance);
            break;
        case 2: balance += deposit();
            showBalance(balance);
            break;
        case 3: balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4: std::cout << "Thanks for visiting, come back soon!\n";
            break;
        default: std::cout << "Please, inform a valid option (1-4)\n";
    }
    }while(choice != 4);

}

void showBalance(double balance){
    std::cout<< "This is your balance: $" << std::setprecision(2) << std::fixed << balance << "\n";
}
double deposit(){
    double amount = 0;

    std::cout << "Enter the amount to be deposit: ";
    std::cin >> amount;
    if (amount < 0){
        std::cout << "That's not a valid amount: " << amount << "\n";
        amount = deposit();
    }
    return amount;
}
double withdraw(double balance){
    double amount = 0;
    std::cout << "Enter the amount to withdraw: ";
    std::cin >> amount;
    if (amount > balance){
        std::cout<< "You can't withdraw $" << amount << " from a balance of $" << balance << "\n";
        amount = withdraw(balance);
    }
    else if(amount < 0){
        std::cout << "$" << amount << " is not a valid amount\n";
        amount = withdraw(balance);
    }
    return amount;
}
