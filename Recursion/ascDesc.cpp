#include<iostream>
using namespace std;

void asc(int n)
{
    if(n==0) return;
    asc(n-1);
    cout << n << " "; 
}

void desc(int n)
{
    if(n==0) return;
    cout << n << " "; 
    desc(n-1);
}

int main()
{
    cout << "Ascending Order : ";
    asc(10);
    cout << "\nDescending Order : ";
    desc(10);
}