#include<iostream>
using namespace std;

int removeDuplicateFromSortedArray(int a[],int n)
{
    int res = 1; //length of distinct array
    for(int i=1;i<n;i++)
    {
        if(a[i] != a[res-1])
        {
            a[res] = a[i];
            res++;
        }
    }
    return res; //Return new Length
}

int main()
{
    int a[] = {1,2,2,3,3,3,3,4,5,5};
    int newLength = removeDuplicateFromSortedArray(a,10);
    for(int i=0;i<newLength;i++)
    {
        cout << a[i] << " ";
    }
}