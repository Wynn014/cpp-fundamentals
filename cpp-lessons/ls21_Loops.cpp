#include <iostream>

int main() {
    std::string name;

    // The loop keeps running and re-prompting if the user presses enter without typing anything
    while (name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name << '\n';

    // Infinite loop warning example:
    // int x = 1;
    // while (x == 1) {
    //     std::cout << "HELP! I'M STUCK IN A LOOP!\n";
    // }

    return 0;
}