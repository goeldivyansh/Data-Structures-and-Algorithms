// BUY 1 STOCK ON 1 DAY AND SELL ON ANOTHER DAY
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//Brute Force  Time: O(n^2) Space: O(1) 
void maximizeProfit1(int a[],int n)
{
    int max = INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(max < a[j] - a[i])
                max = a[j] - a[i];
        }
    }
    cout << "Maximum Profit 1 : " << max << endl;

}

//Time: O(n) Space: O(n)
void maximizeProfit2(int a[],int n)
{
    int max = a[n-1];
    int b[n];

    for(int i=n-1;i>=0;i--)
    {
        if(max < a[i])
        {
            max = a[i];
        }
        b[i] = max;
    }
    
    max = INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        if(b[i] - a[i] > max)
            max = b[i] - a[i];
        
    }
    cout << "Maximum Profit 2 : " << max << endl;
}

//Time: O(n) Space: O(1)
void maximizeProfit3(int a[],int n)
{   
    // 3,1,4,8,7,2,5
    int max = INT_MIN,min = a[0];

    for(int i=0;i<n;i++)
    {
        if(a[i] < min) 
            min = a[i];

        if(a[i] - min > max)
        {
            max = a[i] - min;
        }
    }     
    
    cout << "Maximum Profit 3 : " << max << endl;
}


int main()
{
    // int a[] = {3,1,4,8,7,10,9};
    // int a[] = {1,2,3,4,5,6,7};
    int a[] = {7,6,5,4,3,2,1};
    maximizeProfit1(a,7);
    maximizeProfit2(a,7);
    maximizeProfit3(a,7);
    return 0;
}
