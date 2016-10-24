#include <iostream>

int main(){
    std::string name;
    
    int birth_year = 0;

    std::cout << "Please enter your name: ";

    std::cin >> name;
    
    std::cout  << std::endl;

    std::cout << "Welcome " << name << "!! " << std::endl;
 
    std::cout << "Please enter your birth year: ";

    std::cin >> birth_year;
    
    int age = 2016 - birth_year;
    
    std::cout << std::endl;
    
    std::cout << name << " your current age in this year(2016) is " << age << std::endl;


}