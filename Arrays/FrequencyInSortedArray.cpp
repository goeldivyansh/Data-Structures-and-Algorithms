#include<iostream>
using namespace std;

void FrequencyInSortedArray(int a[],int n)
{
    int count = 1; 
    int i=1;
    while(i<n)
    {
        if(a[i-1] == a[i])
        {
            count++;
        }
        else
        {
            cout << a[i-1] << "  " << count << endl;
            count = 1;
        }
        i++;
    }
     cout << a[i-1] << "  " << count << endl;
}

int main()
{
    // int a[] = {1,2,2,3,3,3,4,4,4,4,5};
    // int a[] = {1,2,3,4,5};
    // int a[] = {1,1,2,2,3,3,4,4};
    // int a[] = {1,2,3,3,3};
    int a[] = {3,3,3,3,};
    FrequencyInSortedArray(a,4);
    return 0;
}
