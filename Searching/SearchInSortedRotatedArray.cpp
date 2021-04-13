#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//Time: O(logn) Space: O(1)
int Search(int a[], int n, int x)
{
    //6,7,8,9,10,1,2
    int m,l=0,r=n-1;

    while(l<=r)
    {
        m = (l+r)/2;
        if(x == a[m])
            return m;
        else if(a[m] > a[l]) // Left Array Sorted
        {
            if(x >= a[l] && x < a[m])
                r = m-1;
            else
                l = m+1;
        }            
        else // Right Array Sorted
        {
            if(x > a[m] && x <= a[r])
                l = m+1;
            else
                r = m-1;
        }
    }
    return -1;
}

int main()
{
    int a[] = {6,7,8,9,10,1,2};
    cout << Search(a,7,2) << endl;
    return 0;
}