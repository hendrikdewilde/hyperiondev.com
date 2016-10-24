
#include <iostream>

int main(){
    std::string name;
    std::string surname;

    std::cout << "Please enter your name: ";

    std::cin >> name;

    std::cout << "Please enter your surname: ";

    std::cin >> surname;

    std::cout << "Your name is " << name << " " << surname << std::endl;

    std::cout << "Cool!!" << std::endl;

    /**
    Output:
    Please enter your name: Hendrik
    Please enter your surname: Botha
    Your name is Hendrik Botha
    Cool!!
    **/

}

