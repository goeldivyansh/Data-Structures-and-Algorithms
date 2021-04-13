#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//Time: O(n) Space: O(1)
int maximumSumSubarray(int a[], int n)
{
    int sum=0, maxSum=INT_MIN;
    bool allNeg = true;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            allNeg = false;
        }   

        sum = sum + a[i];

        if(sum > maxSum) maxSum = sum;
        if(sum < 0) sum = 0; 
    }

    if(allNeg)
    {   
        maxSum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(a[i] > maxSum) 
                maxSum = a[i];
        }
    }

    return maxSum;
}

int main()
{
    // int a[] = {-5,4,6,-9,4,-1};
    // int a[] = {-3,8,-2,4,-5,6};
    int a[] = {-3,-2,-8,-3,-2,-5};
    cout << maximumSumSubarray(a,6);
    
    return 0;
}