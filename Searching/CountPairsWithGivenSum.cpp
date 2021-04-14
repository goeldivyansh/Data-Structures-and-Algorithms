#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int numberOfPairs(int a[], int n, int x)
{
    int l=0,r=n-1,count=0;
    while(l<r)
    {
        if(x == a[l] + a[r])
        {
            count++;
            l++;
            r--;
        }   
            
        else if(x > a[l] + a[r])
            l++;
        else
            r--;
    }
    return count;
}

int main()
{
    int a[] = {0,1,2,8,9,11,12,20};
    cout << numberOfPairs(a,8,13) << endl;
    return 0;
}