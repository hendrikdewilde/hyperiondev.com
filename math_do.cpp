#include <iostream>

int main()
{

    int answer;

    do
    {
        std::cout << "(Addition) What is 3 + 4? ";
        std::cin >> answer;

    } while (answer != 7);
    std::cout << "Correct!" << std::endl;
    
    do
    {
        std::cout << "(Subtraction) What is 9 - 3? ";
        std::cin >> answer;

    } while (answer != 6);
    std::cout << "Correct!" << std::endl;
    
    do
    {
        std::cout << "(Division) What is 8 / 2? ";
        std::cin >> answer;

    } while (answer != 4);
    std::cout << "Correct!" << std::endl;
    
    do
    {
        std::cout << "(Multiplication) What is 3 X 2? ";
        std::cin >> answer;

    } while (answer != 6);
    std::cout << "Correct!" << std::endl;
    std::cout  << std::endl;
    std::cout << "All 4 Questions are Correct!" << std::endl;
}
