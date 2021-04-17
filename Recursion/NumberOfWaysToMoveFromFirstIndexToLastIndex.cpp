#include<iostream>
using namespace std;

int numberOfWays(int a[][5],int n, int m)
{
    if(n==1 || m==1) {
        return 1;
    }
    return numberOfWays(a,n-1,m) + numberOfWays(a,n,m-1);
}

int main()
{
    int a[5][5],n=3,m=3;
    cout << numberOfWays(a,n,m);
    return 0;
}
