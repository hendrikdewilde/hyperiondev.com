#include <iostream>

int main(){
    std::cout << "Hello world!" << std::endl;

    int a = 0, b = 0;

    std::cout << "Enter two integers to add (Integer 1): ";

    std::cin >> a;

    std::cout << "Enter two integers to add (Integer 2): ";

    std::cin >> b;

    std::cout << std::endl;

    int sum = a + b;

    std::cout << "The sum is: " << sum << std::endl;
}
