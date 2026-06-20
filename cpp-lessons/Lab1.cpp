#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
namespace first{
    int y = 5;
}
namespace second{
    int y = 6;
}

int main() {
    const int day = 79;
    std::string word = "hello";
    char grade = 'A';

    std::cout << word << " and " << day << '\n';
    std::cout << "My grade is " << grade << '\n';
    std::cout << "this is number " <<  first::x << std::endl;
    std::cout << "we have " << first::x << " cows and " << second::x << " pieces of bread" << '\n';
    std::cout << "I also have " << second::y << " apples and " << first::y << " pieces of orange" << '\n';

    return 0;
}
