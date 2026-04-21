#include <iostream>
#include <string>

const int MAX_USERS = 100;

struct User {
    int id;
    int pin;
    std::string name;
    double balance;
};

int main() {
    User users[MAX_USERS];
    users[0] = {1, 1234, "Alice", 1000.0};

    std::cout << "---- BANKCLI INFORMATION ----" << std::endl;
    std::cout << "id: " << users[0].id << std::endl;
    std::cout << "pin: " << users[0].pin << std::endl;
    std::cout << "name: " << users[0].name << std::endl;
    std::cout << "balance: " << users[0].balance << std::endl;
    return 0;
}