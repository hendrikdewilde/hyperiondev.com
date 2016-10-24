
#include <iostream>
using namespace std;

int CalculateIt(string specify, int amount_i1, int amount_i2){
    if (specify == "addition") {
        return amount_i1 + amount_i2;
    }
    if (specify == "subtraction") {
        return amount_i1 - amount_i2;
    }
}

float CalculateIt(int amount_i1, int amount_i2){
    return (float)amount_i1 / (float)amount_i2;
}

float CalculateIt(float amount_d1, float amount_d2, float amount_d3){
    return amount_d1 * amount_d2 * amount_d3;
}

int main(){

    char operator_symbol, repeat;
    string specifying;
    int amount_int1, amount_int2, amount_int3, answ_int;
    float amount_dec1, amount_dec2, amount_dec3, answ_dec;

    repeat = 'Y';
    while (repeat == 'Y' || repeat == 'y') {

        cout << "Please enter the operator symbol (Enter: '+' OR '-' OR 'x' OR '/' ): ";
        cin >> operator_symbol;
        cout << endl;

        switch (operator_symbol)
        {
        case '+':
            cout << "Please enter the 1st amount (integer): ";
            cin >> amount_int1;
            cout << "Please enter the 2nd amount (integer): ";
            cin >> amount_int2;
            specifying = "addition";
            answ_int = CalculateIt(specifying, amount_int1, amount_int2);
            cout << "(Add) Your answer is : " << answ_int << endl;
            break;
        case '-':
            cout << "Please enter the 1st amount (integer): ";
            cin >> amount_int1;
            cout << "Please enter the 2nd amount (integer): ";
            cin >> amount_int2;
            specifying = "subtraction";
            answ_int = CalculateIt(specifying, amount_int1, amount_int2);
            cout << "(Subtract) Your answer is : " << answ_int << endl;
            break;
        case 'x':
        case 'X':
            cout << "Please enter the 1st amount (decimal): ";
            cin >> amount_dec1;
            cout << "Please enter the 2nd amount (decimal): ";
            cin >> amount_dec2;
            cout << "Please enter the 3rd amount (decimal): ";
            cin >> amount_dec3;
            answ_dec = CalculateIt(amount_dec1, amount_dec2, amount_dec3);
            cout << "(Multiply) Your answer is : " << answ_dec << endl;
            break;
        case '/':
            cout << "Please enter the 1st amount (integer): ";
            cin >> amount_int1;
            cout << "Please enter the 2nd amount (integer): ";
            cin >> amount_int2;
            answ_dec = CalculateIt(amount_int1, amount_int2);
            cout << "(Divide) Your answer is : " << answ_dec << endl;
            break;
        default:
            cout << "Invalid operator symbol entered!";
            break;
        }
        cout << endl;
        cout << endl;
        cout << "Do you want to go again (Enter: 'Y' to go again): ";
        cin >> repeat;
        cout << endl;
    }

}




