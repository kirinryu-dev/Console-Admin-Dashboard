#include <iostream>
#include <string>
#include <vector>

struct User {
    std::string username;
    std::string userpass;
    int id;
};

int main() {
    std::vector<User> users;
    int currentID = 1001;

    while (true) {
        std::cout << "\n--- New User Registration ---\n";
        std::string username, userpass;

        std::cout << "Enter Username (or type 'q' to quit): ";
        std::getline(std::cin, username);

        if (username == "q") {
            std::cout << "Exiting user creation...\n";
            break;
        }

        std::cout << "Enter Password: ";
        std::getline(std::cin, userpass);

        User newUser = { username, userpass, currentID++ };
        users.push_back(newUser);

        std::cout << "User " << newUser.username << " created with ID: " << newUser.id << "\n";
    }

    std::cout << "\n=== All Registered Users ===\n";
    for (const User& user : users) {
        std::cout << "Username: " << user.username << " | UID: " << user.id << "\n";
    }

    return 0;
}