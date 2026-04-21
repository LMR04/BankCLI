#include <iostream>

#include "structures.h"

void checkBalance(const User& user){
    std::cout << "Current balance: $" << user.balance << std::endl;
};

void deposit(User& user, double amount){
    if(amount > 0){
        user.balance += amount;
        std::cout << "Deposit successful. New balance: $" << user.balance << std::endl;
    } else {
        std::cout << "Error: Deposit amount must be positive." << std::endl;
    }
};
void withdraw(User& user, double amount){
    if(amount > 0){
        if(user.balance >= amount){
            user.balance -= amount;
            std::cout << "Withdrawal successful. New balance: $" << user.balance << std::endl;
        } else {
            std::cout << "Error: Insufficient funds." << std::endl;
        }
    } else {
        std::cout << "Error: Withdrawal amount must be positive." << std::endl;
    }
};

void transfer(User& fromUser, User& toUser, double amount){
    if(amount > 0){
        if(fromUser.balance >= amount){
            fromUser.balance -= amount;
            toUser.balance += amount;
            std::cout << "Transfer successful. New balance: $" << fromUser.balance << std::endl;
        } else {
            std::cout << "Error: Insufficient funds." << std::endl;
        }
    } else {
        std::cout << "Error: Transfer amount must be positive." << std::endl;
    }
}; 