//Play around with this program and see if you can change it to provide different outputs.

#include <iostream>

int main(){
    int monthNo = 0; // Variable initialise and assign

    std::cout << "Please enter a month number: " << std::endl;

    std::cin >> monthNo;

    std::cout << "The month you have entered is: " << std::endl;

    switch (monthNo)
    {
    case 1:
        std::cout << "January";
        break;
    case 2:
        std::cout << "February";
        break;
    case 3:
        std::cout << "<March";
        break;
    case 4:
        std::cout << "April";
        break;
    case 5:
        std::cout << "May";
        break;
    case 6:
        std::cout << "June";
        break;
    case 7:
        std::cout << "July";
    case 8:
        std::cout << "August";
        break;
    case 9:
        std::cout << "September";
        break;
    case 10:
        std::cout << "October";
        break;
    case 11:
        std::cout << "November";
        break;
    case 12:
        std::cout << "December";
        break;
    default:
        std::cout << "Invalid month number entered!";
        break;
    }

}

