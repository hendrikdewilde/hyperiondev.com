#include <iostream>

int main(){
    double x = 4.56, y = 6.78;

	double product = x * y;

	std::string name;

    std::cout << "Please enter your name: " << std::endl;

    std::cin >> name;

    std::cout << "Hi there, " << name << "!" << std::endl;

	std::cout << "The multiplication of 4.56 and 6.78 is: " << product << std::endl; //Hint: Answer Should be 30.9168

	std::cout << "The answer as an integer is: " << (int) product << std::endl;
}
