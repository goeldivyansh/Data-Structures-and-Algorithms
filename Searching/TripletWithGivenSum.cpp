#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int twoPairSum(int a[], int l, int r, int x)
{
    while(l<r)
    {
        if(x == a[l] + a[r])
        {
            cout << a[l] << "  " << a[r];
            return 1;
        }
        else if(x > a[l] + a[r])
            l++;
        else
            r--;
        
    }
    return -1;
}

int tripletSum(int a[], int n, int x)
{
    for(int i=0;i<n-2;i++)
    {
        if(twoPairSum(a,i+1,n-1,x-a[i]) == 1) 
        {
            cout << "  " << a[i] << endl;
            return 1;
        }
    }
    return -1;
}

int main()
{
    int a[] = {2,4,8,9,11,12,20,30};
    cout << tripletSum(a,8,62) << endl;
    return 0;
}