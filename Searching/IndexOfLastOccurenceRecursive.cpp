#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//Time: O(logn) Space: O(1)
int indexOfLastOccurence(int a[], int l, int r, int x, int n)
{
    if(l>r)
        return -1;

    int m = (l+r)/2;

    if(x > a[m])
        return indexOfLastOccurence(a,m+1,r,x,n);
    else if(x < a[m])
        return indexOfLastOccurence(a,l,m-1,x,n);
    else
    {
        if(m == n || a[m] != a[m+1])
             return m;
        else
            return indexOfLastOccurence(a,m+1,n,x,n);
        
    }
    return -1;
}

int main()
{
    // int a[] = {0,1,1,1,1,1,2};
    // cout << indexOfLastOccurence(a,0,6,1,6) << endl;

    int a[] = {5,10,10,15,20,20,20};
    cout << indexOfLastOccurence(a,0,6,10,6) << endl;
    return 0;
}