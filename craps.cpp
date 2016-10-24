#include<iostream>
#include<cstdlib>
#include<ctime>

int main(){

    int bet, dice1, dice2, roll, roll_count, point, n;
    bool roll_again;
    char answ;

    answ = 'Y';

    while (answ == 'Y') {
        roll_count = 0;
        point = 0;
        roll_again = true;
        srand(time(0));
        std::cout << "=======================================================" << std::endl;
        std::cout << "How much do you want to bet? R";
        std::cin >> bet;
        std::cout  << std::endl;

        dice1 = ((rand() % 6) + 1);
        dice2 = ((rand() % 6) + 1);
        roll = dice1 + dice2;
        roll_count++;
        std::cout << "Roll " << roll_count << ": " << dice1 << " " << dice2 << std::endl;
        for ( n = 1; n <= dice1; n++) {
            std::cout << "*" ;
        }
        std::cout << std::endl;
        for ( n = 1; n <= dice2; n++) {
            std::cout << "*" ;
        }
        std::cout << std::endl;
        std::cout << "Come out Roll : " << roll << std::endl;

        do {
            if (point == 0) {
                switch (roll) {
                //Win
                case 7:
                    std::cout << "You have won R" << bet * 3  << " !! (3x) " << std::endl;
                    roll_again = false;
                    break;
                case 11:
                    std::cout << "You have won R" << bet * 3  << " !! (3x) " << std::endl;
                    roll_again = false;
                    break;
                case 12:
                    std::cout << "You have won R" << bet * 3  << " !! (3x) " << std::endl;
                    roll_again = false;
                    break;
                //Lose
                case 2:
                    std::cout << "Craps: You have lost R" << bet << " !! " << std::endl;
                    roll_again = false;
                    break;
                case 3:
                    std::cout << "Craps: You have lost R" << bet << " !! " << std::endl;
                    roll_again = false;
                    break;
                //Roll again
                default:
                    std::cout << "Point: Is on number " << roll << " !! " << std::endl;
                    point = roll;
                    std::cout << "-------------------- Roll again!! ---------------------" << std::endl;
                    dice1 = ((rand() % 6) + 1);
                    dice2 = ((rand() % 6) + 1);
                    roll = dice1 + dice2;
                    roll_count++;
                    std::cout << "Roll " << roll_count << ": " << dice1 << " " << dice2 << std::endl;
                    for ( n = 1; n <= dice1; n++)
                    {
                        std::cout << "*" ;
                    }
                    std::cout << std::endl;
                    for ( n = 1; n <= dice2; n++)
                    {
                        std::cout << "*" ;
                    }
                    std::cout << std::endl;
                    std::cout << "Roll : " << roll << std::endl;
                    break;
                }
            }
            else {
                if (roll == point) {
                    std::cout << "You have won R" << bet * 2  << " !! (2x) " << std::endl;
                    roll_again = false;
                }
                else if (roll == 7) {
                    std::cout << "You have lost R" << bet << " !! " << std::endl;
                    roll_again = false;
                } else {
                    std::cout << "-------------------- Roll again!! ---------------------" << std::endl;
                    dice1 = ((rand() % 6) + 1);
                    dice2 = ((rand() % 6) + 1);
                    roll = dice1 + dice2;
                    roll_count++;
                    std::cout << "Roll " << roll_count << ": " << dice1 << " " << dice2 << std::endl;
                    for ( n = 1; n <= dice1; n++)
                    {
                        std::cout << "*" ;
                    }
                    std::cout << std::endl;
                    for ( n = 1; n <= dice2; n++)
                    {
                        std::cout << "*" ;
                    }
                    std::cout << std::endl;
                    std::cout << "Roll : " << roll << std::endl;
                }
            }
        } while (roll_again == true);

        std::cout << std::endl;
        std::cout << "Do you want to bet again? (Y) ";
        std::cin >> answ;
    }
}
