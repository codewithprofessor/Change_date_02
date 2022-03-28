/*
*1. Create a class that imitates part of the functionality of the basic data type int. Call the
class Int (note different capitalization). The only data in this class is an int variable.
Include member functions to initialize an Int to 0, to initialize it to an int value, to dis-
play it (it looks just like an int), and to add two Int values.
Write a program that exercises this class by creating one uninitialized and two initialized
Int values, adding the two initialized values and placing the response in the uninitialized
value, and then displaying this result.
*/
#include<iostream>
using namespace std;
class Int 
{
    int i;
    public:
    void initialize(int c)
    {
        i=c;
    }
    void add(Int a,Int b)
    {
        i= a.i+b.i;
    }
    void display()
    {
        cout<<"\nResult = "<<i<<endl;
    }

};
int main()
{
    // code by ALI
    Int ob1,ob2,ob3;
    ob1.initialize(2);
    ob2.initialize(3);
    ob3.add(ob1,ob2);
    ob3.display();
    return 0;
}