#include<iostream>
using namespace std;
class dis
{
    int feet;
    float inch;
    public:
    dis()
    {
        feet=0;
        inch=0;
    }
    dis(int x,float y)
    {
        feet=x;
        inch=y;
    }

    void input() //This function is use to take a input from a user
    {
        do
        {
            cout<<"Enter the Feet: ";
            cin>>feet;
            cout<<"Enter the Inch: ";
            cin>>inch;

        }while (inch<0 || inch>=12);    //This loop for take a inch less the 12 and greater then 0        
    }

    void add(dis a)
    {
        feet=feet+a.feet;
        inch=inch+a.inch;

    }

    dis add1(dis a,dis b)    //we cannot function overload by just chng the return type so i can change the name of the funciton
    {
        dis tem;
        tem.feet=feet+b.feet+a.feet;
        tem.inch=inch+b.inch+a.inch;
        return tem;
    }

    bool isgreater(dis a)  //This function in use to compair the value and return the boolen type value so its type is bool
    {
        if(feet*12+inch>a.feet*12+a.inch)
        return true;
        else 
        return false;
    }

    void display()  //This function is use to display the values
    {
        while (inch>=12)
        {
            feet++;
            inch-=12;
        }
        cout<<"The Result= "<<feet<<"\'"<<inch<<"\""<<endl;
    }
};
int main()
{
    dis ob1(2,3),obj2,obj3,obj4,obj5;
    cout<<"Enter the Value of obj2\n";
    obj2.input();
    obj2.add(ob1);
    cout<<"The Sum of ob1 and obj2 is \n";
    obj2.display();

    cout<<"Enter the Value of obj3\n";
    obj3.input();
    cout<<"Enter the Value of obj4\n";
    obj4.input();

    cout<<"The Sum of obj2 and obj3 and obj 4 store in obj 5 with the return in add2\n";
    obj5=obj2.add1(obj3,obj4);
    obj5.display();
    
    cout<<"We can compair the ob3 with obj4"<<endl;
    if(obj3.isgreater(obj4))
    cout<<"The obj3 is Greater\n";
    else 
    cout<<"The obj4 is Greater\n";

    return 0;
}