#include<iostream>
using namespace std;

int log(int x)
{
    if(x<2) return 0;
  
    return 1+log(x/2);
   
}

int main()
{
    cout << log(3);
}