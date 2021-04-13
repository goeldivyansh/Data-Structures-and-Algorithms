#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//Time: O(logn) Space: O(1)
int binarySearch(int a[], int n, int x)
{
    int m,l=0,r=n-1;

    while(l<=r)
    {
        m = (l+r)/2;
        if(x == a[m])
            return m;
        else if(x > a[m])
            l = m+1;
        else
            r = m-1;
    }
    return -1;
}

int main()
{
    // int a[] = {1,1,0,1,0,1,1,1,1,0,0,1,1};
    // int a[] = {1,1,1,1,1};
    int a[] = {1,2,3,4,6,7,8,9,10};
    cout << binarySearch(a,9,1) << endl;
    cout << binarySearch(a,9,10) << endl;
    cout << binarySearch(a,9,9) << endl;
    cout << binarySearch(a,9,2) << endl;
    cout << binarySearch(a,9,5) << endl;
    cout << binarySearch(a,9,0) << endl;
    return 0;
}