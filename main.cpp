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
    int option;
    do {
        std::cout << "---- BANKCLI ----" << std::endl;
        std::cout << "1. Check balance" << std::endl;
        std::cout << "2. Deposit" << std::endl;
        std::cout << "3. Withdraw" << std::endl;
        std::cout << "4. Transfer" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Select an option: ";
        std::cin >> option;
        switch (option){
        case 1:
            /* code */
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        default:
            std::cout << "Invalid option. Please try again." << std::endl;
            break;
        }
    } while (option != 5);
    

    users[0] = {1, 1234, "Alice", 1000.0};

    std::cout << "---- BANKCLI INFORMATION ----" << std::endl;
    std::cout << "id: " << users[0].id << std::endl;
    std::cout << "pin: " << users[0].pin << std::endl;
    std::cout << "name: " << users[0].name << std::endl;
    std::cout << "balance: " << users[0].balance << std::endl;
    return 0;
}