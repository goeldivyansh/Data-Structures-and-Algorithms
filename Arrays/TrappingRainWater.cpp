#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//Time: O(n^2) Space: O(1)
int trappedWater1(int a[],int n)
{   
    int maxl,maxr,res=0;
    for(int i=1;i<n-1;i++)
    {
        maxl = 0, maxr = 0;
        for(int j=0;j<=i;j++)
        {
            if(a[j] > maxl) maxl = a[j];
        }

        for(int j=i;j<n;j++)
        {
            if(a[j] > maxr) maxr = a[j];
        }

        if(maxl >= maxr)
            res += (maxr-a[i]);
        else 
            res += (maxl-a[i]);
    }
    return res;
}

//Time: O(n) Space: O(n)
int trappedWater2(int a[],int n)
{
    int left[n],right[n];
    int res=0, max=0;
    //3,1,2,4,0,1,3,2
    for(int i=0;i<n;i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }    
        left[i] = max;
    }
    max=0;
    for(int i = n-1;i>=0;i--)
    {
        if(max < a[i])
        {
            max = a[i];
        }    
        right[i] = max;
    }

    for(int i=1;i<n-1;i++)
    {
        if(left[i] >= right[i])
            res += (right[i]-a[i]);
        else 
            res += (left[i]-a[i]);
    }
    return res;
}

int main()
{
    int a[] = {3,1,2,4,0,1,3,2};
    // int a[] = {3,0,1,2,5};
    // int a[] = {1,2,3,4,5,6,7,8};
    // int a[] = {8,7,6,5,4,3,2,1};
    cout << trappedWater1(a,8) << endl;
    cout << trappedWater2(a,8);
    return 0;
}