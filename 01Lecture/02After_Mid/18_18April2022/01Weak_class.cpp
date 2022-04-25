#include<iostream>
using namespace std;
class test
{
    int x;
    int y;
    public:
    test()
    {
        x=0;
        y=0;
    }
    test(int a,int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        int result=0;
        result=x+y;
        cout<<"Your Result is = "<<result;
    }
};
class test2
{
    public:
    test obj;
    void output()
    {
        obj.display();  //We call the function of Class test
    }
};

int main()
{
    // code by ali
    test obj1(4,6);
    cout<<"The result for test class\n";
    obj1.display();
    cout<<endl;
    test2 obj2;
    cout<<"The result for test2 class\n";
    obj2.output();
    return 0;
}