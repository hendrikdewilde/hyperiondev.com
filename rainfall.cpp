#include <iostream>
const int NUM_YEARS = 6;
const int NUM_MONTHS = 12;
int main() {
    double avgAnnual[NUM_YEARS], highestRainfallMonth[2];
    double avgMonthlyPeriod, avgAnnualCounter;
    int mIndex, highestRainfallMonthAmount;

    avgMonthlyPeriod = 0;
    highestRainfallMonthAmount = 0;

    //double rainfall[NUM_YEARS][NUM_MONTHS];

    std::string months[12] = {"Jan", "Feb", "Mrt", "Apr",
                                "May", "Jun", "Jul", "Aug",
                                "Sep", "Oct", "Nov", "Des"};

    double rainfall[][NUM_MONTHS] = {
      {33, 14, 5, 2, 0, 2, 0, 1, 16, 26, 41, 63},
      {31, 15, 7, 0, 0, 0, 1, 0, 19, 32, 36, 72},
      {29, 11, 3, 1, 1, 1, 0, 0, 22, 27, 39, 64},
      {32, 19, 6, 5, 2, 0, 1, 3, 15, 23, 46, 69},
      {27, 14, 8, 2, 0, 2, 4, 7, 17, 26, 42, 86},
      {36, 18, 6, 3, 2, 0, 0, 5, 14, 28, 45, 75}};

    std::cout << "\nA table of rainfall for Year 2000 - 2005:" << std::endl;
    std::cout << "\n" ;
    for (mIndex = 0; mIndex < 12; ++mIndex) {
        std::cout << "\t" << months[mIndex];
    }

    std::cout << std::endl;
    std::cout << "===========================================================================================================\n";

    for (int yearIndex = 0; yearIndex < NUM_YEARS; ++yearIndex) {
        std::cout << "Year 200" << (yearIndex) << " |";

        avgAnnualCounter = 0;

        for (int monthIndex = 0; monthIndex < NUM_MONTHS; ++monthIndex) {
            std::cout << '\t' << rainfall[yearIndex][monthIndex];

            //avgAnnual
            avgAnnualCounter = avgAnnualCounter + rainfall[yearIndex][monthIndex];

            //Calculate avgMonthlyPeriod
            avgMonthlyPeriod = avgMonthlyPeriod + rainfall[yearIndex][monthIndex];

            //Calculate highestRainfall
            if (highestRainfallMonthAmount < rainfall[yearIndex][monthIndex]) {
                highestRainfallMonthAmount = rainfall[yearIndex][monthIndex];
                highestRainfallMonth[0] = yearIndex;
                highestRainfallMonth[1] = monthIndex;
            }
        }

        avgAnnual[yearIndex] = (avgAnnualCounter / NUM_MONTHS);

        std::cout << std::endl;
    }

    //avgAnnual
    for (mIndex = 0; mIndex < NUM_YEARS; ++mIndex) {
        std::cout << "\nThe average monthly rainfall for Year 200"
                  << mIndex << " was " << avgAnnual[mIndex] << "mm" << std::endl;
    }

    //Disply avgMonthlyPeriod
    std::cout << "\nThe average monthly rainfall for Year 2000-2005 was: "
              << (avgMonthlyPeriod / (NUM_YEARS * NUM_MONTHS)) << "mm" << std::endl;

    //Disply highestRainfall
    std::cout << "\nThe month with the highest rainfall for Year 2000-2005 was: "
              << months[(int) highestRainfallMonth[1]]  << " 200" << highestRainfallMonth[0]
              << " with " << rainfall[(int) highestRainfallMonth[0]][(int) highestRainfallMonth[1]]
              << "mm" << std::endl;
}
