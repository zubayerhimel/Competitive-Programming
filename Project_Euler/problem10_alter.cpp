/*
    The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

    Find the sum of all the primes below two million.
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
void SeiveMethod(ll number);

int main()
{
    SeiveMethod(2000000);
}

void SeiveMethod(ll number)
{
    bool prime[number + 1];
    ll sum = 0;
    memset(prime, true, sizeof(prime));

    for(ll p = 2; p*p <= number; p++)
    {
        if(prime[p] == true)
        {
            for(ll i = p*p; i <= number; i += p)
            {
                prime[i] = false;
            }
        }
    }

    for(ll j = 2; j <= number; j++)
    {
        if(prime[j])
        {
            sum += j;
        }
    }

    cout << "Sum of all prime numbers below two million " << sum << endl;
}