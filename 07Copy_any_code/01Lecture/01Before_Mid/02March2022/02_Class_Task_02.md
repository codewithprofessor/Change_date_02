```c++
#include<iostream>
#include<string>
using namespace std;
class mobile
{
    string name;
    int price ;
    int model;
    public:
    mobile()
    {
        price =0;
    }
    // this constructur just for example 
    mobile(int x)
    {
        price=x;
    }

    void input()
    {
        cout<<"Enter the name of Mobile: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Etner the Mobil Price: ";
        cin>>price;
        cout<<"Etner the Mobil Price: ";
        cin>>model;
    }

    void display()
    {
        cout<<"Name : "<<name  <<endl;
        cout<<"Price : "<<price<<endl;
        cout<<"Model : "<<model<<endl;
    }
};
int main()
{
    // code by ali
    mobile a;
    a.input();
    a.display();

    mobile b(20000);
    cout<<"\nShow this price just for example\n\n";
    b.display();
    b.input();
    b.display();
    return 0;
}
```