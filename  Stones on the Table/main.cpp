//https://codeforces.com/problemset/problem/266/A
//334
#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cou=0;
    for(int i=0;i<n;i++)
    {
       if(s[i]==s[i+1])
        cou++;
    }
    cout<<cou<<endl;
    return 0;
}
