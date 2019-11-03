/*
    2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

    What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <bits/stdc++.h>

using namespace std;

bool isDivisible(int number);

int main()
{
    int number = 20;
    while(true)
    {
        if(isDivisible(number))
        {
            break;
        }
        else
        {
            number += 1;
        }
    }
    cout << number << endl;
}

bool isDivisible(int number)
{
    for(int i = 2; i < 21; i++)
    {
        if(number % i != 0)
        {
            return false;
        }
    }
    return true;
}