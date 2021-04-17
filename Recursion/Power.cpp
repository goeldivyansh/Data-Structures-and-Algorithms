#include<iostream>
using namespace std;

int pow(int a, int n)
{
    if(n==0) return 1;
    return a*pow(a,n-1); 
}

int fastPow(int a, int n)
{
    if(n==0) return 1;
    if(n%2 == 0)
        return fastPow(a*a,n/2);
    
    return a*pow(a*a,n/2); 
}


int main()
{
    // cout << pow(2,7);
    cout << fastPow(2,1);
}