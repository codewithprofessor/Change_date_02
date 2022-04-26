/*
Define a count that counts the number of student while entering or leaving the lab. 
On entry the count should get incremented and on exit should be decremented. 
Total number of students present in the lab can also be displayed. 
*/
#include<iostream>
using namespace std;
class student
{
    int count;
    public:
    student():count(0){}
    void operator ++(int)
    {
        count++;
    }
    void operator --(int)
    {
        count--;
    }
    void display()
    {
        cout<<count<<" Student present in the lab\n";
    }
};
int main()
{
    // code by ALI
    int a;
    student obj;
    cout<<"\n\n\t\t [1] When Student enter in the \n\t\t [2] When Student exit the lab \n\t\t [0] For exit the program\n";
    do
    {
        cin>>a;
        if(a==1)
        {
            obj++;
            obj.display();
        }
        else if(a==2)
        {
            obj--;
            obj.display();
        }
        else if(a>2 || a<0)
        cout<<"Please Enter the Right Choice\n";
    }while(a!=0);
    
    return 0;
}