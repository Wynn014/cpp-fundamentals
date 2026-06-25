#include <iostream>
#include <chrono>
#include <thread>

int main() {
    // 1. Declare counter index; 2. Set test condition; 3. Increment counter
    for (int i = 10; i >= 0; i--) {
        std::cout << "Iteration: " << i << "\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
  //configured the speed of intervals
  //made it from 1-10 to 10-0; basically just reversed it
    std::cout << "Happy New Year!\n";

    return 0;
}