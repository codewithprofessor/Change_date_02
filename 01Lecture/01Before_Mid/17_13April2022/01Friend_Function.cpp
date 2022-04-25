#include<iostream>
using namespace std;
class B;
class A
{
    int s1,s2;
    public:
    void input()
    {
        cout<<"Enter the Value of Subj1: ";
        cin>>s1;
        cout<<"Enter the Value of Subj2: ";
        cin>>s2;
    }
    // We use Friend functiuon to get the access to Class A and B Praivate data members
    friend int add(A,B);      //syntax of friend Function
};
class B
{
    int s3, s4;
    public:
    void input()
    {
        cout<<"Enter the Value of Subj3: ";
        cin>>s3;
        cout<<"Enter the Value of Subj4: ";
        cin>>s4;
    }
    friend int add(A,B);
};
int add(A ob1,B ob2)  //defination of add
{
    int res;
    res=ob1.s1+ob1.s2+ob2.s3+ob2.s4;
    return res;      //return this value to main function
}
int main()
{
    // code by Ali
    A obj1;
    B obj2;
    obj1.input();
    obj2.input();
    cout<<"The Sum of All the Subject is = "<<add(obj1,obj2);

    return 0;
}