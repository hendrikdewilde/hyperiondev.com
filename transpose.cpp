#include <iostream>
const int ROW = 5;
const int COLUMN = 5;
int main() {

    int rowIndex, columnIndex;

    //initialise matrixA
    int matrixA[][COLUMN] = {
      {1, 3, 5, 7, 9},
      {2, 4, 6, 8, 0},
      {3, 5, 7, 9, 1},
      {4, 6, 8, 0, 2},
      {5, 7, 9, 1, 3}};

    //initialise matrixB
    int matrixB[ROW][COLUMN];

    //matrix are transformed (swapped)
    for (rowIndex = 0; rowIndex < ROW; ++rowIndex) {
        for (columnIndex = 0; columnIndex < COLUMN; ++columnIndex) {
            matrixB[columnIndex][rowIndex] = matrixA[rowIndex][columnIndex];
        }
    }

    // Display matrixA
    std::cout << "\n"
            << "\t\t" << "Col 1"  << "\t" << "Col 2"
            << "\t" << "Col 3"  << "\t" << "Col 4"
            << "\t" << "Col 5" << std::endl;
    std::cout << "\t-------------------------------------------------\n";

    for (rowIndex = 0; rowIndex < ROW; ++rowIndex) {
        std::cout << "Row "<< (rowIndex + 1) << "\t|";

        for (columnIndex = 0; columnIndex < COLUMN; ++columnIndex) {
            std::cout << '\t' << matrixA[rowIndex][columnIndex];
        }
        std::cout << "\t|" << std::endl;
    }
    std::cout << "\t-------------------------------------------------\n";
    std::cout << std::endl;
    std::cout << std::endl;

    // Display matrixB
    std::cout << "\n"
            << "\t\t" << "Col 1"  << "\t" << "Col 2"
            << "\t" << "Col 3"  << "\t" << "Col 4"
            << "\t" << "Col 5" << std::endl;
    std::cout << "\t-------------------------------------------------\n";

    for (rowIndex = 0; rowIndex < ROW; ++rowIndex) {
        std::cout << "Row "<< (rowIndex + 1) << "\t|";

        for (columnIndex = 0; columnIndex < COLUMN; ++columnIndex) {
            std::cout << '\t' << matrixB[rowIndex][columnIndex];
        }
        std::cout << "\t|" << std::endl;
    }
    std::cout << "\t-------------------------------------------------\n";
    std::cout << std::endl;

}
