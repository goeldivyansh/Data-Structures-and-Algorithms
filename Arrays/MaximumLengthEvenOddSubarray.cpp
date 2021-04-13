#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//Time: O(n^2) Space: O(1)
int maximumLengthEvenOddSubarray1(int a[], int n)
{
    int res=1, count=1;
    for(int i=0;i<n-1;i++)
    {
        count = 1;
        for(int j=i+1;j<n;j++)
        {
            if( (a[j]%2 == 0 && a[j-1]%2 == 1) || (a[j]%2 == 1 && a[j-1]%2 == 0) )
                count++;
            else
                break;
        }
        if(count > res) res = count;
    }
    return res;
}

//Time: O(n) Space: O(1)
int maximumLengthEvenOddSubarray2(int a[], int n)
{
    //1,2,3,5,2,7,4
    int res=1,count=1;
    
    for(int i=1;i<n;i++)
    {   
        if((a[i]%2 == 0 && a[i-1]%2 == 1) || (a[i]%2 == 1 && a[i-1]%2 == 0) )
        {
            count++;
        }
        else
            count=1;

        if(count > res) 
            res = count;
    }
    return res;
}

int main()
{
    // int a[] = {-5,4,6,-9,4,-1};
    // int a[] = {1,2,3,4,5,6};
    int a[] = {1,2,3,5,2,7,8};
    cout << maximumLengthEvenOddSubarray1(a,7) << endl;
    cout << maximumLengthEvenOddSubarray2(a,7);
    
    return 0;
}