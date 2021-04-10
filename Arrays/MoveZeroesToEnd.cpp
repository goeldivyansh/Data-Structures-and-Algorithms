#include<iostream>
using namespace std;

void moveZeroesToEnd(int a[],int n)
{
    int count = 0; //Number of non zero elements
    
    for(int i=0;i<n;i++)
    {
        if(a[i] != 0)
        {
            swap(a[i],a[count]);
            count++;
        }    
    }
}

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int a[] = {1,2,0,0,0,3,0,4,0,6 ,0,8};
    
    moveZeroesToEnd(a,12);
    for(int i=0;i<12;i++)
    {
        cout << a[i] << " ";
    }
}