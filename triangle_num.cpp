
#include <iostream>
using namespace std;

void triangleNo(int amount);

int main()
{
    int triangleNumbers;

    triangleNumbers = 100;

    cout << "Triangle numbers: " << endl;

    triangleNo(triangleNumbers);
    cout << endl;

}

void triangleNo(int amount) {
    int x, sum;
    sum = 0;

    for (x = 1; x <= amount; x++) {
        cout << x << "\t:\t" << sum << endl;
        sum = sum + x;

    }
}

