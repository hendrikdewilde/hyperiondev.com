#include <iostream>
using namespace std;

/*  ========== SCOPE ==========

    The scope of a program is the different places within the program where variables can be declared.
    There are, broadly speaking, three places where variables can be declared.
    The scope of a variable is essentially the 'lifetime' of the variable and is very important in knowing where variables
    begin and end within a program.

    1)  'Global' variables are declared outside the main function as well as all other functions and can be accessed within any function
        within your program
    2)  'Local' variables are declared within the main function as well as ay other function. These varibles only last for the duration of
        of the function in which they are declared.
    3)  When you declare a variable as a function parameter has what is called 'parameter scope'. */

string myFunction(string person); //the variable 'person' has parameter scope

double money = 50.00; //global variable(it does not matter where you initialise it as long as it it above the main function)

int main()
{
/*  ========== DEFINING LOCAL SCOPE WITHIN BLOCKS ==========

    It is possible to further restrict the scope within a function (in this case the main function) by using blocks {}.
    The "block" is a pair of braces where the variable will be valid for within the program. */

    cout << "========== DEFINING LOCAL SCOPE WITHIN BLOCKS ==========" << endl;
    {
        int num1 = 20; //the scope of this variable is between a block

        num1 += 10; //incrementing num1 by 10

        cout << endl << num1 << endl; //we can print out or manipulate the variable between the block only
    }

    //If we try to manipulate the variable num1 outside the block we will receive an error as seen below

    //num1 += 5; //will return an error

    //cout << endl << num1 << endl; //will return an error

/*  What you will see is the error returned is- "error: 'num1' was not declared in this scope".
    Knowing what this error means now might help you later on within your coding career.

    Please comment out the above two erroneous lines before continuing. */

    string stringName = "Thehseen"; //this is a local string declaration and initialisation meaning that this variable can be used anywhere
                                    //in the main function from now on

    //another block
    {
        string stringName; //redeclaring the string makes it usable only within this block
        stringName = "Limichilwe"; //this assignment to the string will only last for the block

        cout << endl << stringName << " has lifesaving of R " << money << endl; //money is a global variable and can be used here
    }

    cout << endl << stringName << " has lifesaving of R " << money << endl; //run the program and observe the difference in the two printed lines

/*  As can be seen above, there are two variables with exactly the same name but have different scopes within the main function.
    Play around with the above code if you do not understand what is happening.

    ========== SCOPE WITHIN FUNCTIONS ==========

    Remember the function that we prototyped above?

    If you see below the main function, the function has been written there.
    The variables defined within that function can only be used within the function.

    As will be seen after you run the program, the second line below will return an error.
    This is because the two variables are only usable within the user defined function. */

    cout << myFunction(stringName); //calling the function

    //cout << greeting + ' ' + person; //returns an error

    return 0;
}

string myFunction(string person) // here the variable 'person' has parameter scope.
{
    string greeting; //this variable's scope lies within this function
    greeting = "Hello"; //initialise variable

    return (greeting + " " + person);
}
