/*
    A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

    a2 + b2 = c2
    For example, 32 + 42 = 9 + 16 = 25 = 52.

    There exists exactly one Pythagorean triplet for which a + b + c = 1000.
    Find the product abc
*/

#include <bits/stdc++.h>

using namespace std;

bool isTriplet(int i, int j, int k);

int main()
{
    for(int i = 1; i < 999; i++)
    {
        for(int j = i+1; j < 999; j++)
        {
            for(int k = j+1; k < 999; k++)
            {
                if(isTriplet(i, j, k) && (i + j + k == 1000))
                {
                    cout << i << endl << j << endl << k << endl;
                }
            }
        }
    }
}

bool isTriplet(int i, int j, int k)
{
    return (i*i) + (j*j) == (k*k);
}