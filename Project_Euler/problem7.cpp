/*
    By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

    What is the 10001st prime number?
*/

#include <bits/stdc++.h>

using namespace std;

bool isPrime(int number);

int main()
{
    int num = 2, count = 0;
    while(true)
    {
        if(isPrime(num))
        {
            count++;
            if(count == 10001)
            {
                break;
            }
        }
        num++;
    }

    cout << num << endl;
}

bool isPrime(int number)
{
    for(int i = 2; i < number; i++)
    {
        if(number % i == 0)
        {
            return false;
        }
    }
    return true;
}
