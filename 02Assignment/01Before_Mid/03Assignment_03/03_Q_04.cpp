/*
*3. Create a class called Time that has separate int member data for hours, minutes, and
seconds. One constructor should initialize this data to 0, and another should initialize it
to fixed values. Another member function should display it, in 11:59:59 format. The final
member function should add two objects of type Time passed as arguments.
A main() program should create two initialized Time objects (should they be const?) and
one that isn’t initialized. Then it should add the two initialized values together, leaving the
result in the third Time variable. Finally it should display the value of this third variable.
Make appropriate member functions const.
*/
#include<iostream>
using namespace std;
class Time
{
    int hours;
    int mintues;
    int seconds;
    public:
    Time()
    {
        hours=0;
        mintues=0;
        seconds=0;
    }
    Time(int x,int y,int z)
    {
        hours=x;
        mintues=y;
        seconds=z;
    }
    void display() const
    {
        cout<<"\n\n"<<hours<<":"<<mintues<<":"<<seconds<<endl<<endl;
    }
    void add(Time a,Time b)
    {
        hours=b.hours+a.hours;
        mintues=b.mintues+a.mintues;
        seconds=b.seconds+a.seconds;
    }

};
int main()
{
    // code by ALI
    Time obj1(10,40,20);
    Time obj2(11,10,59);
    Time obj3;
    obj3.add(obj1,obj2);
    cout<<"\nThe time for obj3 is \n";
    obj3.display();
    return 0;
}