#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//Time: O(logn) Space: O(1)
int indexOfFirstOccurence(int a[], int l, int r, int x)
{
    if(l>r)
        return -1;

    int m = (l+r)/2;

    if(x > a[m])
        return indexOfFirstOccurence(a,m+1,r,x);
    else if(x < a[m])
        return indexOfFirstOccurence(a,l,m-1,x);
    else
    {
        if(m == 0 || a[m-1] != a[m])
        {
             return m;
        }
        else
        {
            return indexOfFirstOccurence(a,l,m-1,x);
        }
    }
    return -1;
}

int main()
{
    int a[] = {0,1,1,1,1,1,1};
    cout << indexOfFirstOccurence(a,0,6,1) << endl;

    // int a[] = {5,10,10,15,20,20,20};
    // cout << indexOfFirstOccurence(a,0,6,20) << endl;
    return 0;
}