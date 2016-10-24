#include <iostream>

int main()
{

    std::string correct_answers;
    int answer;

    correct_answers = "Incorrect";
    while (correct_answers == "Incorrect") {
        std::cout << "(Addition) What is 3 + 4? ";
        std::cin >> answer;

        if (answer == 7) {
            std::cout << "Correct!" << std::endl;
            correct_answers = "Correct";
        } else {
            std::cout << "Incorrect!" << std::endl;
        }
    }

    correct_answers = "Incorrect";
    while (correct_answers == "Incorrect") {
        std::cout << "(Subtraction) What is 9 - 3? ";
        std::cin >> answer;

        if (answer == 6) {
            std::cout << "Correct!" << std::endl;
            correct_answers = "Correct";
        } else {
            std::cout << "Incorrect!" << std::endl;
        }
    }

    correct_answers = "Incorrect";
    while (correct_answers == "Incorrect") {
        std::cout << "(Division) What is 8 / 2? ";
        std::cin >> answer;

        if (answer == 4) {
            std::cout << "Correct!" << std::endl;
            correct_answers = "Correct";
        } else {
            std::cout << "Incorrect!" << std::endl;
        }
    }

    correct_answers = "Incorrect";
    while (correct_answers == "Incorrect") {
        std::cout << "(Multiplication) What is 3 X 2? ";
        std::cin >> answer;

        if (answer == 6) {
            std::cout << "Correct!" << std::endl;
            correct_answers = "Correct";
        } else {
            std::cout << "Incorrect!" << std::endl;
        }
    }
    std::cout  << std::endl;
    std::cout << "All 4 Questions are Correct!" << std::endl;
}
