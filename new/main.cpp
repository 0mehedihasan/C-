#include <iostream>
#include<string.h>
using namespace std;

int main()

    {
    char s[100],s1[100];
    int rev;

    cout << "Enter a num/cha: ";
    cin >> s;
    strcpy(s1,s);
    strrev(s1);
    rev=strcmp(s,s1);

    if(rev<=0)
    {
        cout<<"it is a palindrome"<<endl;
    }
    else
    {
        cout<<"it is not palindrome"<<endl;
    }
    return 0;
}
