#include <iostream>

int main() {
    int number = 0;

    // This code WILL run once even though number is not > 0 initially
    do {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The number is: " << number << "\n";

    return 0;
}