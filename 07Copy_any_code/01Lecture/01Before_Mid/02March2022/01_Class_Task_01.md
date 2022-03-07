```c++
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
    void input()
    {
        cout<<"Enter the value of Feet: ";
        cin>>feet;
        cout<<"Enter the value of Inchs: ";
        cin>>inch;
    }
    void display()
    {
        cout<<"The Total Feet is "<<feet<<endl;
        cout<<"The Total inch is "<<inch<<endl<<endl;
    }
};
int main()
{
    // code by ali
    dis b;
    b.input();
    b.display();
    dis a(2,2);
    cout<<"\nThis is Value of Counstructure overload\n"<<endl;
    a.display();
    a.input();
    a.display();    
    return 0;
}
```