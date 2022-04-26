#include<iostream>
using namespace std;
class test
{
    int a;      //Variable 01 
    int b;      //Variable 01
    public:
    void input()
    {
        cout<<"Enter the Value of A: ";
        cin>>a;
        cout<<"Enter the Value of B: ";
        cin>>b;
    }
// 01
    // This User Define Function Add the Objects And Return the Value of Class type 
    test operator +(test obj)
    {
        test result;
        result.a=a+obj.a;   //add the values of a
        result.b=b+obj.b;   //add the values of b
        return result;
    }
// 02
    // This User Define Function Subtract the Objects And Return the Value of Class type 
    test operator -(test obj)
    {
        test result;
        result.a=a-obj.a;   //Subtract the values of a
        result.b=b-obj.b;   //Subtract the values of b
        return result;
    }
// 03
    // This User Define Function Multiply the Objects And Return the Value of Class type 
    test operator *(test obj)
    {
        test result;
        result.a=a*obj.a;   //Multiply the values of a
        result.b=b*obj.b;   //Multiply the values of b
        return result;
    }
// 04
    // This User Define Function Divide the Objects And Return the Value of Class type 
    test operator /(test obj)
    {
        test result;
        result.a=a/obj.a;   //Divide the values of a
        result.b=b/obj.b;   //Divide the values of b
        return result;
    }

    // increment
    void operator ++()       //prefix increment
    {
        a++;b++;
    }
    void operator ++(int)    //postfix increment// in the Post-Increment, value is first used inside the expression and then incremented.++a
    {
        a++;b++;
    }

    // Decrement
    void operator --()       //prefix Decrement
    {
        a--;
        b--;
    }
    void operator --(int)    //postfix Decrement//n the Post-DEIncrement, value is first used inside the expression and then Decremented.--a
    {
        a--;b--;
    }
    // Display Function
    void display()
    {
        cout<<"\nA= "<<a<<"\nB= "<<b;
    }

};
int main()
{
    //code by ALI
    test obj1,obj2,obj3,obj4,obj5,obj6,obj7;
    cout<<"Enter the Value of Object 01\n";
    obj1.input();
    cout<<"Enter the Value of Object 02\n";
    obj2.input();

    cout<<"\nAdd the obj1 and obj2 Result = ";
    obj3=obj1+obj2;
    obj3.display();
    cout<<"\nSubtract the obj1 and obj2 Result = ";
    obj4=obj1-obj2;
    obj4.display();
    cout<<"\nMultiply the obj1 and obj2 Result = ";
    obj5=obj1*obj2;
    obj5.display();
    cout<<"\nDivide the obj1 and obj2 Result = ";
    obj6=obj1/obj2;
    obj6.display();

    cout<<"Increment post and pre"<<endl;
    obj1++;
    ++obj2;
    cout<<"\nObject 01 post increment";
    obj1.display();
    cout<<"\nObject 02 pre increment";
    obj2.display();
    // decrement
    cout<<"Decrement post and pre"<<endl;
    obj1--;
    --obj2;
    cout<<"\nObject 01 post Decrement";
    obj1.display();
    cout<<"\nObject 02 pre Decrement";
    obj2.display();
  
    
    return 0;
}
