/*
    This document should be open in Bloodshed Dev-C++. If not, ensure that Dev-C++ is installed on your system
    and ensure that this file is open in Dev-C++. To open in Dev-C++, simply double-click on this file once
    Dev-C++ is installed and it will automatically open it.

    You may wish to change the colour of the comments for easier reading.
    To do this, click on "Tools" on the top tool bar and then click "Editor options".
    Choose the "Colours" tab on the top and then select "Comment" on the left.
    You can then change the Foreground colour to something you find easier to read on the screen

    In order to fully understand the basics of C++, you must please read through all the comments in this file.

    ========== WELCOME TO TASK 11 - RECURSION! ==========
    In task 9, we wrote code that makes use of functions. So you might need to revisit this task before attempting this task.

    In this task, you are going to be introduced to the concept of Recursion. In simple terms, recursion is when a function
    calls itself. Normally a recursive function uses conditional statements to call the function recursively or not. The main
    benefits of using recursion are compact code,  easily understandable code and less variables used. Recursion and iteration can
    be used to achieve the same results. The following guideline will help you to decide on which method to use depending on a given
    situation.
    When to use recursion?  Where compact, understandable  and intuitive code is required.
    When to use iteration? Where there is limited memory and faster processing is required

    The following example shows where recursion can be be used instead of iteration to calculate the Fibonacci sequence.
*/
#include <iostream>
#include <string>
using namespace std;

//===========================Fibonacci Sequence Examples=======================================================================
// The Fibonacci sequence is calculated using the following formula: fib(n) = fib(n-1) + fib(n-2)
// Method 1: Using Iteration
int iterative_fibonnaci(int n)
{
    int fn1,fn2;
    fn1 =  fn2 = 1;

    if(n == 0)
    {
        return 0;
    }

    else if (n == 1 || n == 2)
    {
        return 1;
    }

    else
    {
        for(int i = 3; i<=n; i++)
        {
            int fn = fn1 + fn2;
            fn1 = fn2;
            fn2 = fn;
        }
        return fn2;
    }
}

// Method 2: Using Recursion
int recursive_fibonnaci(int n)
{
    if(n == 0)
    {
        return 0;
    }

    else if (n == 1 || n == 2)
    {
        return 1;
    }

    else
    {
        //This code perform the same function as the for loop in the iterative function
        return recursive_fibonnaci(n-1) + recursive_fibonnaci(n-2); // Using recursion instead of a loop
    }

}

//========================================Factorial Task 1 ===========================================
// The factorial is calculated using the following formula: fact(n) = n! = n×(n-1)! = 1×2×3×4×...×n
// Method 1: Factorial Example using iteration
int iterative_factorial(int n)
{
    int fact = 1;
    if(n  < 1)
    {
        cout<<"Invalid Entry \n";
    }
    else
    {
        // Calculating the factorial using iteration
        for(int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        return fact;
    }

}

// Method 2: Complete the Factorial function below using a recursive function
int recursive_factorial(int n)
{
    // Write your code here!!!!!
    int fact;
    if (n < 1) {
        cout<<"Invalid Entry \n";
    }
    else if (n == 1) {
        return 1;
    }
    else {
        fact = n * recursive_factorial(n - 1);
        //cout << n << " - " << fact << " : ";
        return fact;
    }
}

// Function prototypes for Task 2 - Task 3
int string_length_iteration(string word);
int string_length(string word);
int GCD_iteration(int x , int y);
int GCD(int x , int y);

int main()
{
    cout<<"======== Fibonacci Examples ==========="<<endl;
    cout<<"Using iteration Fibonacci(6) is "<<iterative_fibonnaci(6)<<endl;
    cout<<"Using recursion Fibonacci(6) is "<<recursive_fibonnaci(6)<<endl;

    // Task 1: Complete the code for the recursive factorial function
    cout<<"\n======== Task 1: Factorials ==========="<<endl;
    cout<<"Using iteration Factorial(4) is "<<iterative_factorial(4)<<endl;
    cout<<"Using recursion Factorial(4) is "<<recursive_factorial(4)<<endl;

    /*
        ========================== Task 2 =======================================
        The C++  String library determines the length of a string by counting the
        number of characters before the '\0' (The null termination character). This
        function can  also be implemented using recursion. Your task is to implement
        this using recursion. Complete the code for the string_length function below.
    */
    string myString = "Hyperion C++";
    cout<<"\n======== Task 2: String Length ======="<<endl;
    cout<<"The string '"<< myString <<"' has "<< myString.length()<<" characters using the C++ string library\n";
    cout<<"The string '"<< myString <<"' has "<< string_length_iteration(myString)<<" characters using my string length function (iteration)\n";
    cout<<"The string '"<< myString <<"' has "<< string_length(myString)<<" characters using my string length function (recursion)\n";

    cout<<"\n======== Task 3: GCD function ======="<<endl;
    cout<<"GCD(54,24) = " << GCD_iteration(54,24) << " (iteration)" << endl;
    cout<<"GCD(54,24) = " << GCD(54,24) << " (recursion)" << endl;
    /*
        ========================== Task 3 =======================================
        Complete the GCD function below to calculate the greatest common divisor (GCD)
        for two numbers x and y using recursion. GCD is the largest positive integer
        that divides the numbers without leaving a remainder.
    */

}

//==================== Task 2 ================

int string_length_iteration(string word)
{
    int x_count = 0;
    char my_char;
    do {
        my_char = word[x_count];
        //cout << "my_char :" << my_char << endl;
        ++x_count;
    } while (my_char != '\0');
    x_count -=1;
    return x_count; // Write the iteration implementation for calculating the string length
}


int y_count = 0;
int string_length(string word)
{
    if (word[y_count] == '\0') {
        return y_count;
    }
    //cout << y_count << " my_char :" << word[y_count] << endl;
    y_count++;
    string_length(word) ;
    return y_count; // Write the recursive implementation for calculating the string length
}


//==================== Task 3 ================

int GCD_iteration(int x , int y)
{
    int z_count = 0;
    //cout << x << " : " << y << endl;
    for(int i = 1; i <= x && i <= y; i++) {
        //cout << i << endl;
        if (x % i == 0 && y % i == 0) {
            z_count = i;
       }
    }
    return z_count;// Write the recursive implementation for calculating the greatest common divisor
}


int GCD(int x , int y)
{
    if (y == 0) {

        return x;
        //return y;
    }
    if (x != y) {

        //return GCD(x%y, y%x);
        return GCD(y, x%y);
        //return GCD(x, y%x);
    }
    //return 0; // Write the recursive implementation for calculating the greatest common divisor
}

