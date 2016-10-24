#include <iostream>
using namespace std;

int yCoordinateCalculate(int m, int x);

int yIntercept = 2;

int main()
{
    int yCoordinate, xCoordinate, gradient;

    cout << "Enter gradient: ";
    cin >> gradient;

    // y = (m * x) + c
    // yCoordinate = (gradient * xCoordinate) + yIntercept

    for (xCoordinate = -50; xCoordinate <= 50; xCoordinate++) {
        yCoordinate = yCoordinateCalculate(gradient, xCoordinate);
        cout << "(x(" << xCoordinate << ") ; y(" << yCoordinate << "))" << endl;
    }
}

int yCoordinateCalculate(int m, int x) {
    int y;
    y = (m * x) + yIntercept;

    return y;
}
