
#include <bits/stdc++.h>

using namespace std;

int getNumberLength(int number);

int numArr[6];

int main()
{
    int i, j, maxnumber, num;
    for(i = 100; i <= 999 ; i++ )
    {
        for(j = 100; j <= 999; j++)
        {
            num = i * j; 
            if(getNumberLength(num) == 6)
            {
                if(numArr[0] == numArr[5] && numArr[1] == numArr[4] && numArr[2] == numArr[3])
                {
                    if(maxnumber < num)
                    {
                        maxnumber = num;
                    }
                }
            }
        }
    }
    cout << maxnumber << endl;
}

int getNumberLength(int number)
{   
    int count = 0, indx = 0;
    
    while(number != 0)
    {
        int lastDigit = number % 10;
        number /= 10;
        ++count;
        numArr[indx] = lastDigit;
        indx++;
    }

    return count;
}