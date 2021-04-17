#include<iostream>
using namespace std;

int maximum(int a, int b, int c)
{
    if(a>=b && a>=c) return a;
    else if(b>=a && b>=c) return b;
    else return c;
}

int maxRopePeices(int n, int a, int b,int c)
{
    if(n==0) 
        return 0;
    if(n<0)
        return -1;
    
    int ans = maximum(maxRopePeices(n-a,a,b,c), maxRopePeices(n-b,a,b,c), maxRopePeices(n-c,a,b,c));

    if(ans == -1)
        return -1;
    else return ans+1;

}

int main()
{
    cout << maxRopePeices(45,11,9,12);
}
