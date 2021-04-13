#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//Time: O(logn) Space: O(1)
int binarySearch(int a[], int l, int r, int x)
{
    if(l>r)
        return -1;
    
    int m = (l+r)/2;
    if(x == a[m])
        return m;
    else if(x > a[m])
        return binarySearch(a,m+1,r,x);
    else
        return binarySearch(a,l,m-1,x);
}

int main()
{
    // int a[] = {1,1,0,1,0,1,1,1,1,0,0,1,1};
    // int a[] = {1,1,1,1,1};
    int a[] = {1,2,3,4,6,7,8,9,10,11};
    cout << binarySearch(a,0,9,1) << endl;
    cout << binarySearch(a,0,9,11) << endl;
    cout << binarySearch(a,0,9,10) << endl;
    cout << binarySearch(a,0,9,2) << endl;
    cout << binarySearch(a,0,9,5) << endl;
    cout << binarySearch(a,0,9,0) << endl;
    return 0;
}