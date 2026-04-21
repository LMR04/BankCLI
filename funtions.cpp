#include <iostream>

#include "structures.h"

int login(const User users[], int userCount){
    int id, pin;
    std::cout << "Enter user ID: ";
    std::cin >> id;
    std::cout << "Enter PIN: ";
    std::cin >> pin;

    for(int i = 0; i < userCount; i++){
        if(users[i].id == id && users[i].pin == pin){
            std::cout << "Login successful. Welcome, " << users[i].name << "!" << std::endl;
            return i; 
        }
    }
    std::cout << "Invalid ID or PIN. Please try again." << std::endl;
    return -1; 
};

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