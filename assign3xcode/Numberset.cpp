#include "Numberset_header.h"
#include <iostream>
using namespace std;

void numberSetAdd(NumberSet& set, Number num)
{
    if(set.count == maxSize) // No space left.
    {
        cout << "The set is already full. Unable to add " << num << " to the set.\n"; // The set has no more room to add numbers.
        return;
    }
    else
    {
        set.items[set.count] = num; //Next item is equal to num.
        (set.count)++; //Increment count.
    }
}


void numberSetRemove(NumberSet& set, Number num){
    int i = 0, j = 0, instance = 0, found = 0; // Declaring local variables.

    if(set.count == 0)
    {
        cout << "The set is already empty.\n"; // The set has no numbers in it to remove.
        return;
    }
    else
    {
        do
        {
            if(set.items[i] == num ) // Delete number in location [i]
            {
                for(j = i; j < maxSize; j++) // move all elements down by 1 to overwrite num.
                {
                    set.items[j] = set.items[j+1];
                }
                set.count = set.count -1 ; // Take away 1 from the count because an element has been removed.
                set.items[maxSize-1] = 0; // Set the final element of the array as 0 because it is not occupied.
                instance++; // Increment by 1 because we only want to remove the first instance of num.
                found = 1; // If the number is in the set, found = 1. Otherwise found = 0.
                cout << "The number " << num << " has been removed from the number set.\n"; // Informing the user that the number has been removed.
            }
            i++; // Increment by 1 to search the whole array.
        }while(i < maxSize && instance < 1);

        if(found == 0){
            cout << "The number " << num <<  " is not in the number set. Unable to remove.\n"; // Informing the user that the number is not present in the set.
        }
    }
}

int numberSetCountLessThan(NumberSet& set, Number num) // Find how many elements in the set are less than num.
{
    int i = 0, counter = 0; // Delcaring local variables.

    for(i = 0; i < maxSize; i++) // Checking all the elements in the array of the set.
    {
            if(set.items[i] < num && set.items[i] != 0) // If an element is less than num, enter the if statement.
            {
                counter++; // Increment by 1 for every element smaller than num.
            }
    }
    return counter; // Return the value of counter.
}

int numberSetCountEvenOrOdd(NumberSet& set, Number num)
{
    int i = 0, countereven = 0, counterodd = 0;

    for(i = 0; i < maxSize; i++)
    {
        if(set.items[i] != 0) // We dont want to count the 0's in the set.
        {
            if(set.items[i] % 2 == 0) //If an element is even we increment countereven by 1. Otherwise we increment counterodd.
                {
                    countereven++;
                }

            else counterodd++;
        }
        
        else i++;
    }

    if(num % 2 == 0) // If num is even return the countereven value, otherwise return counterodd value.
        {
            return countereven;
        }
    else return counterodd;
}

NumberSet newNumberSet() // Creating a new, blank NumberSet.
{
    struct NumberSet x;
    x.count = 0; // Count = 0 because the array is only full of 0s.
    x.items[maxSize-1] = {0}; // Initialising the array to 10 elements of 0.
    return x;

}


