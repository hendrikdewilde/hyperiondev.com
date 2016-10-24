#include <iostream>
#include <vector>

int main() {

    int fiveDecimal[5];
    int fiveDecimalTemp;
    std::string fiveBinary[5];
    std::string  fiveBinaryTemp;

    int xCounter, kCounter, yModulus, yDivision;

    xCounter = 0;
    do {
        std::cout << "Please enter a Decimal: ";
        std::cin >> fiveDecimal[xCounter];
        ++xCounter;
    } while (xCounter < 5);
    std::cout << std::endl;

    for (int p = 0; p < 5; ++p) {
        kCounter = 0;
        yModulus = 0;
        yDivision = 999;
        std::vector<std::string> yBinary;

        fiveDecimalTemp = fiveDecimal[p];

        //std::cout << "fiveDecimalTemp: " << fiveDecimalTemp << std::endl;
        while (yDivision > 0)
        {
            yModulus = fiveDecimalTemp % 2;
            yDivision = fiveDecimalTemp / 2;
            //std::cout << "yModulus: " << yModulus << std::endl;
            //std::cout << "yDivision: " << yDivision << std::endl;
            if (yModulus == 0) {
                yBinary.push_back("0");
            } else {
                yBinary.push_back("1");
            }
            fiveDecimalTemp = yDivision;
            //std::cout << std::endl;
        }
        //std::cout << "yBinary.size: " << yBinary.size() << std::endl;

        kCounter = yBinary.size();
        do {
            kCounter--;
            fiveBinaryTemp = yBinary.at(kCounter);
            //std::cout << fiveBinaryTemp ;
            fiveBinary[p] = fiveBinary[p] + fiveBinaryTemp;
        } while (kCounter > 0);
        //std::cout << std::endl;
    }

    std::cout << "Decimal" << "\t\t" << "Binary" << std::endl;
    for (int p = 0; p < 5; ++p) {
        std::cout << fiveDecimal[p] << "\t\t" << fiveBinary[p] << std::endl;
    }

}
