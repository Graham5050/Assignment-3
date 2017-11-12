/* Program Description: This program is an example of using an ADT. In our case it is called NumberSet. Declaring a new NumberSet creates a structure with two members, items & count. We have a list of declared functions that are used to manipulate values of NumberSet. In this program there is a numberset and the program tries to insert numbers 1 to 11. The user enters an integer value and the number of integers less than the users value is printed to the screen. If userValue was an even number, the number of even elements is printed to the screen otherwise the number of odd elements is printed. The numbers 2, 6 and 13 are removed from the numberset with varying results. The revised values for less than and even/odd elements are printed to the screen and the program exits. */

#include <iostream>
#include "Numberset_header.h"

using namespace std;

int main()
{
    int i = 1, userValue = 0, lessthan = 0, EvenOdd = 0;
    NumberSet set1;
    set1 = newNumberSet();
    
    while(i < 12)
    {
        cout << "Adding " << i << " to the set.\n";
        numberSetAdd(set1, i); // Adding the numbers between 1 and 11 inclusive to the set.
        i++;
    }

    cout << "\nPlease enter an integer value: "; // Accepting the users input.
    cin >> userValue;

    cout << "\nYour input is " << userValue << ".\n"; // Confirmation of users entered value printed to screen.
    lessthan = numberSetCountLessThan(set1, userValue);
    cout << "The number of elements less than your input is " << lessthan << ".\n"; // Printing the result to the user.

    EvenOdd = numberSetCountEvenOrOdd(set1, userValue);
    if(userValue % 2 == 0) // Checking if num was an even or odd number.
    {
        cout << "The number of even elements in the set is " << EvenOdd << ".\n\n";
    }
    else
    {
        cout << "The number of odd elements in the set is " << EvenOdd << ".\n\n";
    }

    // Removing the required numbers from the set. The function outputs the result of the removal.
    numberSetRemove(set1, 2);
    numberSetRemove(set1, 6);
    numberSetRemove(set1, 13);

    cout << endl << "Your input is " << userValue << ".\n"; // Confirmation of users entered value printed to screen.

    lessthan = numberSetCountLessThan(set1, userValue);
    cout << "The revised number of elements less than your input is " << lessthan << ".\n";

    EvenOdd = numberSetCountEvenOrOdd(set1, userValue);
    if(userValue % 2 == 0) // Print to screen outcome depends on whether userValue was even or odd.
    {
        cout << "The revised number of even elements in the set is " << EvenOdd << ".\n";
    }
    else
    {
        cout << "The revised number of odd elements in the set is " << EvenOdd << ".\n";
    }

    return 0;
} // End of main

