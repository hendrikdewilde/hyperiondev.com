#include <iostream>

int main(){ //Main App
    std::string name; //String var called name
    int age; //Integer var called age

    std::cout << "Enter your name (Press Enter): "; //Display on screen - "Enter your name (Press Enter): "

    std::cin >> name; //Input for var name

    std::cout << "Enter your age (Press Enter): "; //Display on screen - "Enter your age (Press Enter): "

    std::cin >> age; //Input for var age

    std::cout <<  std::endl; //Display on screen - New line

    std::cout << "My name is " << name << " and I am " << age << " years old." << std::endl; //Display on screen - "My name is " value of var (name) " and I am " value of var (age) " years old." - New line

    std::cout << "Hello World" << std::endl; //Display on screen - "Hello World" - New line
}
