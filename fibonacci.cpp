#include <iostream>

int main() {

    int counter, term_amount, term1, term2, term_sum;

    do {
        std::cout << "How many Terms must the program compute?(1 - 50): ";
        std::cin >> term_amount;

    } while (term_amount < 1 ||  term_amount > 50);

    std::cout  << std::endl;

    counter = 1;
    term1 = 0;
    term2 = 0;
    term_sum = 0;

    while (counter <= term_amount) {

        term_sum = term1 + term2;

        std::cout << "T" << counter << ":" << term_sum << std::endl;

        if (term_sum == 0) {
            term2++;
        }

        term1 = term2;
        term2 = term_sum;

        counter++;

    }
}
