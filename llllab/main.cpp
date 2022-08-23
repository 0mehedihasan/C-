#include<iostream>
using namespace std;
class DB;
class DM
{
  private:
    double meter;
    double centimeter;
    double x;
  public:
    DM(): meter(0),centimeter(0),x(0) { }
    friend double add(DM,DB);
};
class DB
{
  private:
    double inch;
    double feet;
    double y;
  public:
    DB(): inch(0),feet(0),y(0) { }
    friend double add(DM,DB);
};
double add(DM objectM,DB objectB)
{
    cin>>objectM.meter>>objectM.centimeter;
    cin>>objectB.inch>>objectB.feet;
 objectM.x=objectM.meter+objectM.centimeter;
 objectB.y=objectB.inch+objectB.feet;
  return (objectM.x+objectB.y);

}
int main()
{
  DM objectM;

  DB objectB;

  cout<<add(objectM,objectB);
  return 0;
}
