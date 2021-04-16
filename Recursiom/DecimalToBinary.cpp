#include<iostream>
using namespace std;

void decimalToBinary(int a)
{
    if(a==0) {
        // cout << 0;
        return;
    }
    decimalToBinary(a/2);
    cout << a%2;
   
}

int main()
{
    decimalToBinary(4);
}