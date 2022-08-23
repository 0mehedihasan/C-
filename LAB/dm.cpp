#include <iostream>
using namespace std;
class DM
{
public:
    double meter;
    double centimeter;
    double add;
    friend double addition1(DM);
};
class DB
{
    public:
    double inch;
    double feet;
    double add;
    friend double addition2(DB);
};
double addition1(DM D)
{
D.add=D.meter+D.centimeter;
return D.add;

}
double addition2(DB D)
{
D.add=D.feet+D.inch;
return D.add;

}
int main()
{
DM ob1;
cin>>ob1.meter>>ob1.centimeter;
DB ob2;
cout<<ob1.add<<endl;
cin>>ob2.inch>>ob2.feet;
cout<<ob2.add<<endl;
    return 0;
}
