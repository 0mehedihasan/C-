#include<iostream>
using namespace std;
int main()
{
    int num, rev=0,x, temp;
    cout<<"Enter the Number: ";
    cin>>num;
    temp = num;
    while(temp>0)
    {
        x = temp%10;
        rev = (rev*10)+x;
        temp = temp/10;
    }
    if(rev==num)
        cout<<"It is a Palindrome Number";
    else
        cout<<"It is not a Palindrome Number";
    return 0;
}
