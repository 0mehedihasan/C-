#include <iostream>

using namespace std;

int main()
{
    float w,r,salary;
    cout<<"Enter work hour:";
    cin>>w;
    cout<<"Enter the value of rate:";
    cin>>r;
    if(w<=40)
    {
        salary=w*r;
        cout<<"Gross Payment:"<<salary<<endl;
    }
    else
    {
        cout<<"Congratulation!you will get promotion";
    }
    return 0;
}
