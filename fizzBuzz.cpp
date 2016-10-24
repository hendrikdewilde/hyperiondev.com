
#include <iostream>

int main(){
	int counter, multi_3, multi_5;

    for ( counter= 1; counter <= 100; counter++) {
        multi_3 = counter % 3;
        multi_5 = counter % 5;

        if (multi_3 == 0 && multi_5 == 0) {
            std::cout << "FizzBuzz" << std::endl;
        }
        else if (multi_3 == 0) {
            std::cout << "Fizz" << std::endl;
        }
        else if (multi_5 == 0) {
            std::cout << "Buzz" << std::endl;
        }
        else {
            //std::cout << "n : " << n << std::endl;
            std::cout << counter << std::endl;
        }
    }
}
