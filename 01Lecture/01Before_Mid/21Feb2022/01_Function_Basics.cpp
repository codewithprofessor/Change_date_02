#include<iostream>
using namespace std;
void fun1(int x);
void fun2(int *x);
void fun3(int &x);
void fun4(int *a);
void fun4(int a[],int b);
void fun5(int a[][2]);
int main()
{
    // code by Ali
    int num1=10;
    int num2=10;
    int num3=10;
    int num4[3]={1,2,3};
    int num5[2][2]={1,2,3,4};
    fun1(num1);
    cout<<"This is Output from 'main function' = "<<num1<<endl;
    cout<<"\n\n\n";

    fun2(&num2);    
    cout<<"This is Output from 'main function' = "<<num2<<endl;
    cout<<"\n\n\n";

    fun3(num3);
    cout<<"This is Output from 'main function' = "<<num2<<endl;
    cout<<"\n\n\n";

    fun4(num4);         // in this case memory remain same and 1 memory is created
    fun4(num4,3);       // in this case memory remain same and 1 memory is created 
    cout<<"\n\n\n";

    fun5(num5);   // same memory is created for num5 and 'a'
    fun5(num5);    // same memory is created for num5 and 'a'

    return 0;
}

void fun1(int x)      //different Memory can be created for x and num1
{
    x=x+5;
    cout<<"This is Output of fun1 of x = "<<x<<endl;
}


void fun2(int *x)     //Remain same memory for x and num2
{
    *x=*x+5;
    cout<<"This is Output of fun1 of x = "<<*x<<endl;
}


void fun3(int &x)     //Remain same Memory for x and num3
{
    x=x+5;
    cout<<"This is Output of fun1 of x = "<<x<<endl;
}


void fun4(int *a)   //first method to pass the array
{
    cout<<"This is output of fun4 array";
    for(int i=0;i<3;i++)
    {
        cout<<a[i]<<"  ";
    }
}


void fun4(int *a,int b)    //pass the single array with this method
{
    cout<<"This is output of fun4 array and its 2nd method to pass the array";
    for(int i=0;i<b;i++)
    {
        cout<<a[i]<<"  ";
    }
}

void fun5(int a[][2])       // this is method 01 for passing the 2d array
{
    cout<<"This is out put of fun5 and it is 1st method to pass the double array";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<a[i][j]<<"   ";
        }
    }
}


void fun5(int *a[2])       // this is method 02 for passing the 2d array
{
    cout<<"This is out put of fun5 and it is 2nd method to pass the double array";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<a[i][j]<<"   ";
        }
    }
}
