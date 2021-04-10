#include<iostream>
using namespace std;

int secondLargestElement(int a[], int n)
{
    int res=-1,ind=0;

    for(int i=1;i<n;i++)
    {
        if(a[i] > a[ind])
        {
            res = ind;
            ind = i;
        }
        else if(a[i] < a[ind])
        {
            if(res == -1 || a[i] > a[res]) res = i;
        }
    }
    return res;
}

int main()
{
    int a[] = {2,9,1,6,4,8,8,5};
    int n = 7;
    int ind = secondLargestElement(a,n);
    cout << a[ind];
    return 0;
}