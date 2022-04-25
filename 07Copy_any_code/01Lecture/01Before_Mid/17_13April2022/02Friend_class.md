```c++
#include<iostream>
using namespace std;
class B;
class A
{
    int s1;
    int s2;
    public:
    void input()
    {
        cout<<"Enter the Marks of Sub1: ";
        cin>>s1;
        cout<<"Enter the Marks of Sub2: ";
        cin>>s2;
    }
    friend class B;        //We want to get access the private data of class A so B is Friend of A
};
class B
{
    int s3;
    int s4;
    public:
    void input()
    {
        cout<<"Enter the Marks of Sub3: ";
        cin>>s3;
        cout<<"Enter the Marks of Sub4: ";
        cin>>s4;
    }
    int add(A obj)
    {
        int res;
        res=obj.s1+obj.s2+s3+s4;
        return res;
    }
};
int main()
{
    // code by ALI
    A obj1;
    B obj2;
    obj1.input();
    obj2.input();
    cout<<"The Sum of All the Subject is = "<<obj2.add(obj1)<<endl;
    return 0;
}
```