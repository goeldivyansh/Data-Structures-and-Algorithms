// BUY AS MANY STOCK ON 1 DAY AND SELL ON ANOTHER DAY
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//Time: O(n) Space: O(1)
void maximizeProfit(int a[],int n)
{   
    int profit=0;

    for(int i=1;i<n;i++)
    {
        if(a[i] > a[i-1]) 
        {
            profit += a[i] - a[i-1];
        }
    }     
    
    cout << "Maximum Profit : " << profit << endl;
}


int main()
{
    // int a[] = {3,1,4,8,7,10,9};
    int a[] = {1,5,3,8,12};
    // int a[] = {7,6,5,4,3,2,1};
    maximizeProfit(a,5);
    return 0;
}
