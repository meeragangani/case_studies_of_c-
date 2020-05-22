#include <bits/stdc++.h>
using namespace std;

void descOrder(string s)
{
    sort(s.begin(), s.end(), greater<char>());
}

int main()
{
    string s = "geeksforgeeks";
    descOrder(s); // function call
    return 0;
} 
