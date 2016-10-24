#include <iostream>

int main() {

    int intCelsius[10];
    float intFahrenheit[10];
    int xCounter;

    xCounter = 0;
    do {
        std::cout << "Please enter temperature value: ";
        std::cin >> intCelsius[xCounter];

        intFahrenheit[xCounter] = ((intCelsius[xCounter] * (float)9) / (float)5) + (float)32;

        ++xCounter;
    } while (xCounter < 10);
    std::cout << std::endl;

    std::cout << "Celsius" << "\t\t" << "Fahrenheit" << std::endl;
    for (int p = 0; p < 10; ++p) {
        std::cout << intCelsius[p] << "\t\t" << intFahrenheit[p] << std::endl;
    }

}
