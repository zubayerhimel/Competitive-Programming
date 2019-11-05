/*
    The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

    Find the sum of all the primes below two million.
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
bool isPrime(ll number);

int main()
{
    ll sum = 0, i;
    for(i = 2; i < 2000000; i++)
    {
        if(isPrime(i))
        {
            sum += i;
        }
    }
    cout << sum << endl;
}

bool isPrime(ll number)
{
    for(ll i = 2; i <= sqrt(number); i++)
    {
        if(number%i == 0)
        {
            return false;
        }
    }
    return true;
}