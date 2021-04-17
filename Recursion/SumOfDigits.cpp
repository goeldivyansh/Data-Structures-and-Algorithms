#include<iostream>
using namespace std;

int sumOfDigits(int x)
{
    if(x < 10) {
        return x;
    }
    return x%10 + sumOfDigits(x/10);
}

int main()
{
    int x = 2222;
    cout << sumOfDigits(x);
    return 0;
}
