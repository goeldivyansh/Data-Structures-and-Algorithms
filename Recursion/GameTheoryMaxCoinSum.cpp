// There are two players equally intellignet. Both have to choose one coin from starting or end turnwise such that you will have maximum sum of coins.
#include<iostream>
using namespace std;

int Max(int a, int b)
{
    if(a>b) return a;
    return b;
}

int Min(int a, int b)
{
    if(a>b) return b;
    return a;
}

int maxCoins(int a[], int l, int r)
{
	if(l+1 == r) {
		return Max(a[l],a[r]);
	}

    return Max( a[l] + Min(maxCoins(a,l+2,r), maxCoins(a,l+1,r-1)) , a[r] + Min(maxCoins(a,l+1,r-1), maxCoins(a,l,r-2)) );
}


int main()
{
	// int a[] = {1,5,7,3,20,4};
	// cout << maxCoins(a,0,5);
	int a[] = {100,5000,700,2};
	cout << maxCoins(a,0,3);
	return 0;
}