#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//Time: O(logn) Space: O(1)
int indexOfLastOccurence(int a[], int l, int r, int x,int n)
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
        {
             return m;
        }
        else
        {
            return indexOfLastOccurence(a,m+1,n,x,n);
        }
    }
    return -1;
}

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

int freq(int a[], int n, int x)
{
    int first = indexOfFirstOccurence(a,0,n,x);

    if(first != -1)
        return (indexOfLastOccurence(a,0,n,x,n) - first + 1);
    
    return 0;
}

int main()
{
    // int a[] = {0,1,1,1,1,1,6};
    // cout << indexOfLastOccurence(a,0,6,1,6) << endl;

    int a[] = {5,10,10,10,15,20,20,30};
    cout << freq(a,7,15) << endl;
    return 0;
}