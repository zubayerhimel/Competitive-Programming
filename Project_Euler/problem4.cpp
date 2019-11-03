/*
    A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

    Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <bits/stdc++.h>

using namespace std;

int isPelindrome(int number);

int main()
{
    int i, j, maxnumber = 0, num;
    for(i = 100; i <= 999 ; i++ )
    {
        for(j = 100; j <= 999; j++)
        {
            num = i * j; 
            if(isPelindrome(num))
            {
                maxnumber = max(maxnumber, num);
            }
            
        }
    }
    cout << maxnumber << endl;
}

int isPelindrome(int number)
{   
    int t, r = 0;
    t = number;
    while(t != 0)
    {
        r = r * 10;
        r = r + t%10;
        t /= 10;
    }
    return number == r;
}
