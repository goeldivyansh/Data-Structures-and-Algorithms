#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//Time: O(n) Space: O(1)
int maximumOnes(int a[], int n)
{
    int count=0,max=0;

    for(int i=0;i<n;i++)
    {
        count = 0;
        while(a[i] == 1)
        {
            count++;
            i++;
        }
        if(count > max) max = count;
    }
    return max;
}

int main()
{
    // int a[] = {1,1,0,1,0,1,1,1,1,0,0,1,1};
    // int a[] = {1,1,1,1,1};
    int a[] = {0,0,0,0,0};
    cout << maximumOnes(a,5);

    return 0;
}