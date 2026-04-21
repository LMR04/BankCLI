#ifndef STRUCTURES_H
#define STRUCTURES_H

#include <string>

struct User {
    int id;
    int pin;
    std::string name;
    double balance;
};

void checkBalance(const User& user);
void deposit(User& user, double amount);
void withdraw(User& user, double amount);
void transfer(User& fromUser, User& toUser, double amount); 

#endif