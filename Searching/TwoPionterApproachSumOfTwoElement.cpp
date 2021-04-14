#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int sum(int a[], int n, int x)
{
    int l=0,r=n-1;
    while(l<r)
    {
        if(x == a[l] + a[r])
            return 1;
        else if(x > a[l] + a[r])
            l++;
        else
            r--;
        
    }
    return -1;
}

int main()
{
    int a[] = {2,4,8,9,11,12,20,30};
    cout << sum(a,8,18) << endl;
    return 0;
}