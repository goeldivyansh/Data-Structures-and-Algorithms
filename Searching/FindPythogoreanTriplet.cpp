#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int sumOfSquares(int a[], int l, int r, int h)
{
    while(l<r)
    {
        if(h == a[l]*a[l] + a[r]*a[r])
        {
            cout << a[l] << "  " << a[r];
            return 1;
        }
        else if(h > a[l]*a[l] + a[r]*a[r])
            l++;
        else
            r--;
        
    }
    return -1;
}

int pythogoreanTriplet(int a[], int n)
{
    for(int i=n;i>1;i--)
    {
        if(sumOfSquares(a,0,i-1,a[i]*a[i]) == 1) 
        {
            cout << " = " << a[i] << endl;
            return 1;
        }
    }
    return -1;
}

int main()
{   
    int a[] = {0,2,3,4,5,6,7,8,9,11};
    cout << pythogoreanTriplet(a,10) << endl;
    return 0;
}