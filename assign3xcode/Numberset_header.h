typedef int Number;
const int maxSize=10;

struct NumberSet
{
    Number items[maxSize];
    int count;
};

void numberSetAdd(NumberSet& set, Number num); // adds num to set (if possible), otherwise prints error message

void numberSetRemove(NumberSet& set, Number num); // removes first instance (if it exists) of ÔnumÕ from ÔsetÕ, otherwise prints error message

int numberSetCountLessThan(NumberSet& set, Number num); // returns the number of elements smaller than ÔnumÕ in ÔsetÕ

int numberSetCountEvenOrOdd(NumberSet& set, Number num); // returns the number of even elements in ÔsetÕ if ÔnumÕ is even; otherwise, returns the number of odd elements in ÔsetÕ

NumberSet newNumberSet(); // returns a new, empty NumberSet
