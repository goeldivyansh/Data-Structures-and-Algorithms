#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int noOfPairs(int a[], int l, int r, int x)
{
    int count=0;
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

int numberOfTriplets(int a[], int n, int x)
{
    int count=0;
    for(int i=0;i<n-2;i++)
    {
        int temp = noOfPairs(a,i+1,n-1,x-a[i]);
        // cout << temp << " \n"; 
        count = count + temp;
    }
    return count;
}

int main()
{   
    // 0 2 12
    // 0 3 11
    // 2 3 9 
    // 2,4,8

    int a[] = {0,2,3,4,8,9,11,12};
    cout << numberOfTriplets(a,8,14) << endl;
    return 0;
}