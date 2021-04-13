#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//Time: O(logn) Space: O(1)
int indexOfFirstOccurence(int a[], int l, int r, int x)
{
    int m;
    while(l<=r)
    {
        m = (l+r)/2;
        if(x > a[m])
            l = m+1;
        else if(x < a[m])
            r = m-1;
        else
        {
            if(m == 0 || a[m-1] != a[m])
            {
                return m;
            }
            else
            {
                r = m-1;
            }
        }
    }
    return -1;
}

int main()
{
    // int a[] = {0,1,1,1,1,1,1};
    // cout << indexOfFirstOccurence(a,0,6,1) << endl;
    int a[] = {5,10,10,15,20,20,20,25,30,30,30,30,30,30};
    cout << indexOfFirstOccurence(a,0,14,30) << endl;
    return 0;
}