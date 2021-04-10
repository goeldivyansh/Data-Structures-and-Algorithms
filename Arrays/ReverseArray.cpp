#include<iostream>
using namespace std;

void reverse(int a[],int n)
{
    int low = 0;
    int high = n-1;
    while(low < high)
    {
        swap(a[low],a[high]);
        low++;
        high--;
    }

    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int a[] = {1,2,3,4,5};
    int b[] = {1,2,3,4};
    reverse(a,5);
    reverse(b,4);
}

