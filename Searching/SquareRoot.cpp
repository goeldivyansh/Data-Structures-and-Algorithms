#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//Time: O(logn) Space: O(1)
int squareRoot(int n)
{
    int m,l=1,r=n,res;
    while(l<=r)
    {
        m = (l+r)/2;

        if(m*m == n)
            return m;
        else if(m*m > n)
            r = m-1;
        else
        {
            res = m;
            l = m+1;
        }
    }
    return res;
}


int main()
{
    cout << squareRoot(10) << endl << squareRoot(8)<< endl << squareRoot(25);
    return 0;
}