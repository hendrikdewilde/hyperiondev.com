/*  For every triangle- the sum of any two sides is greater than the third side.
    This can be used to test to see if three numbers can be used to represent the lengths of a triangle.

    Write a function that takes each side as an input from the user and returns "True" for a valid triangle and "False" for an invalid
    triangle.

    Hint: The function will return a value of type boolean.

    Write the code for your program below.*/

#include <iostream>
using namespace std;

int inputSide(int sideNo);
bool testIfTriangle(int side1, int side2, int side3);

int main()
{
    int sides[3];

    cout << "Test triangle." << endl;

    for (int i = 0; i < 3; ++i) {
        sides[i] = inputSide(i+1);
    }

    if (testIfTriangle(sides[0], sides[1], sides[2]) == 1) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

}

int inputSide(int sideNo) {
    int side;
    std::cout << "Please enter size of side " << sideNo << ": ";
    std::cin >> side;
    return side;
}

bool testIfTriangle(int side1, int side2, int side3) {

    if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side3 + side1 > side2)) {
        return true;
    } else {
        return false;
    }
}

