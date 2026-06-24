#include <iostream>

int main() {
    int age;
    int day; // Keeps 'day' as a number (1 = Monday, etc.)

    std::cout << "Enter the day number (1-7): ";
    std::cin >> day;

    // 1. Check the day first
    switch (day) {
        case 1:
            std::cout << "It is Monday!\n";
            break;
        case 2:
             std::cout << "It is thursday!\n";
            break;
        case 3:
             std::cout << "It is Wednesday\n";
             break;
        default:
            std::cout << "Aint even a day\n";
            break;
        
    }

    std::cout << "Enter your age: ";
    std::cin >> age;

    // 2. Then check the age gate
    if (age >= 18) {
        std::cout << "Welcome to the site\n";
    } 
    else if (age <= 0) {
        std::cout << "Invalid age\n";
    } 
    else {
        std::cout << "You are not allowed\n";
    }

    return 0;
}