#include <iostream>

int main(){

    std::string password;

    std::cout << "Enter your password: ";

    std::cin >> password;

    std::cout << std::endl;

    if (password == "12345")
    {
        std::cout << "Welcome Ricky!!" << std::endl;
    }
    else if (password == "hyperion")
    {
        std::cout << "Welcome Riaz!!" << std::endl;
    }
    else if (password == "A123b45")
    {
        std::cout << "Welcome Hendrik!!" << std::endl;
    }
    else
    {
        std::cout << "Invalid user." << std::endl;
    }
}



