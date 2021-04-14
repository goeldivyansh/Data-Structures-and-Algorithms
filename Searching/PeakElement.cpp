#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//Time: O(logn) Space: O(1)
int peak(int a[], int n)
{
    int m,l=0,r=n-1;
    while(l<=r)
    {
        m = (l+r)/2;
        if( (m==0 || a[m-1]<a[m]) && (m==n-1 || a[m+1] < a[m]) )
            return m;
        else if( m > 0 && a[m-1] > a[m])
        {
            r = m-1;
        }            
        else
        {
            l = m+1;
        }
    }
    return -1;
}

int main()
{
    int a[] = {90,80,10,20,30,50,60};
    cout << peak(a,7) << endl;
    return 0;
}