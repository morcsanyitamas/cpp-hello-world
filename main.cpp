#include <iostream>

int main() {
    std::string name;
    std:: string line;

    do {
        std::cout << "What is your name? ";
        std::cin >> name;
        std::cout << "Hello, " << name << "!" << std::endl;
    }while (std::getline(std::cin, line));


    return 0;
}
