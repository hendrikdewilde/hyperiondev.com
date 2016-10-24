#include <iostream>

int main(){
    int num;

    std::cout << "Please enter a number: " << std::endl;

    std::cin >> num;

    if (num > 100)
    {
        std::cout << "The number you entered is greater than 100" << std::endl;
    }
    else if (num >= 50)
    {
        std::cout << "The number you entered is greater than or equal to 50" << std::endl;
    }
    else if (num >= 0)
    {
        std::cout << "The number you entered is greater than or equal to 0" << std::endl;
    }
    else
    {
        std::cout << "The number you entered is less than 0" << std::endl;
    }

    char luckyLet;

    std::cout << std::endl << "Please enter your lucky letter between A and E (A and E included):" << std::endl;

    std::cin >> luckyLet;

    switch (luckyLet)
    {
    case 'A':
    case 'a':
        std::cout << "This is not a winning letter. Try again!" << std::endl;
        break;
    case 'B':
    case 'b':
        std::cout << "This is not a winning letter. Try again!" << std::endl;
        break;
    case 'C':
    case 'c':
        std::cout << "This is not a winning letter. Try again!" << std::endl;
        break;
    case 'D':
    case 'd':
        std::cout << "Congratulations! This is the winning letter!" << std::endl;
        break;
    case 'E':
    case 'e':
        std::cout << "This is not a winning letter. Try again!" << std::endl;
        break;
    default:
        std::cout << "Invalid letter entered. Try again!" << std::endl;
        break;
    }

}
