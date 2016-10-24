#include <iostream>

int main() {
    int x = 0;
    std::string pass;
    do {
        ++x ;
        if (x > 3) {
            break;
        }
        std::cout <<"Please enter your password: " << std::endl;
        std::cin >> pass;

    } while (pass != "Hyperion");
	if (x <= 3) {
		std::cout << "Password Correct!" << std::endl;
    } else {
        std::cout << "Maximum three tries exceeded!" << std::endl;
    }


}
