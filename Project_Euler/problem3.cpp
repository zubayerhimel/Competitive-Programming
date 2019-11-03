/*
    The prime factors of 13195 are 5, 7, 13 and 29.

    What is the largest prime factor of the number 600851475143 ?
*/


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void primeNumberFactors(ll i);

int main()
{
    primeNumberFactors(600851475143);
}

void primeNumberFactors(ll number)
{
    ll maxnumber = 0, i;

    while(number%2 == 0)
    {
        cout << 2 << " ";
        maxnumber = max(maxnumber, (ll)2);
        number /= 2;
    }

    for(i = 3; i <= sqrt(number); i += 2)
    {
        while(number % i == 0)
        {
            cout << i << " ";
            maxnumber = max(maxnumber, i);
            number /= i;
        }
    }

    if(number > 2)
    {
        cout << number << " ";
        maxnumber = max(maxnumber, number);
    }

    cout << maxnumber << endl;
}