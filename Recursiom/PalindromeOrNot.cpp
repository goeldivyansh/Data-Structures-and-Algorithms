#include<iostream>
using namespace std;

bool isPal(string s, int left, int right)
{
    if(left >= right) {
        return true;
    }

    return (s[left] == s[right] && isPal(s,left+1, right-1));
}

int main()
{
    string s = "abcab";
    // cout << s.size();
    cout << isPal(s,0,s.size()-1);
    return 0;
}
