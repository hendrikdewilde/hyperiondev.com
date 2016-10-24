/*  Write a Function to draw a frame of asterisks.
    The user must enter two integers representing the width and height of the frame.

    For example:

    * * * * * * *
    *           *
    *           *
    *           *
    * * * * * * *

    should be drawn for a width of 7 and height of 5. Note the asterisks forming the top and the bottom rows of
    the frame are separated by single space characters.
    once you have prototyped and defined the function, test it out by calling it from within the main function.

    Write the code for your program below.*/

#include <iostream>
using namespace std;

void drawFrame(int wsize, int hsize);

int main()
{
    int width, height;

    cout << "Enter width (Bigger than 1): ";
    cin >> width;

    cout << "Enter height (Bigger than 1): ";
    cin >> height;

    cout << endl;

    drawFrame(width, height);
    cout << endl;

}

void drawFrame(int wsize, int hsize) {
    int x, y;

    for (x = 1; x <= hsize; x++) {

        for (y = 1; y <= wsize; y++) {
            //cout << "* ";
            if ((x == 1) || (x == hsize)) {
                cout << "* ";

            } else if ((y == 1) || (y == wsize)) {
                //cout << "+ ";
                cout << "* ";

            } else {
                //cout << "# ";
                cout << "  ";

            }

        }

        cout << endl;
    }

    return;

}
