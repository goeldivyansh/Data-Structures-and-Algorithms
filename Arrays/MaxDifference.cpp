#include<iostream>
using namespace std;
//Max value of a[j] - a[i] such that j > i;

int max(int x, int y)
{
    if(x>=y) return x;
    return y;
}

int min(int x, int y)
{
    if(x<=y) return x;
    return y;
}

int maxDiff(int a[],int n)
{
    int res = a[1] - a[0];
    int minVal = a[0];

    for(int i=1;i<n;i++)
    {
        res = max(res, a[i] - minVal);
        minVal = min(minVal,a[i]);
    }
    return res;
}

int main()
{
    int a[] = {0,2,5,1,4,4,5};
    int n = 7;
    cout << maxDiff(a,n);
}
