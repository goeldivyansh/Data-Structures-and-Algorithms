#include<iostream>
using namespace std;

string interchange(string s, int i, int j)
{
    char c = s[i];
    s[i] = s[j];
    s[j] = c;
    return s;
}
void permutations(string s, int l, int r)
{
    
    if(l==r)
    {
        cout << s << endl;
        return;
    }

    for(int i=l;i<=r;i++)
    {
        // s = interchange(s,l,i);
        permutations(s,l+1,r);
        // s = interchange(s,l,i);
    }
}


int main()
{
    // string s = "abc"
    permutations("abc",0,2);
    return 0;
}
