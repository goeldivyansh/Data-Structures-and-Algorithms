#include<iostream>
using namespace std;

void reverse(int a[],int low,int high)
{
    while(low < high)
    {
        swap(a[low],a[high]);
        low++;
        high--;
    }
}

void leftRotate(int a[], int n, int d)
{
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);

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
    int a[] = {1,2,3,4,5,6,7,8};
    int d = 3;
    int n = 8;
    leftRotate(a,n,d);


}
