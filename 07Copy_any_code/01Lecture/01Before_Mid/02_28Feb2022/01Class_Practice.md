```c++
#include<iostream>
#include<string>
using namespace std;

class student
{
    string name;
    int roll_no;
    int id;
    public :
    void input()
    {
        cout<<"Enter the Name of Student : ";                   
        cin.ignore();
        getline(cin,name);
        cout<<"Enter the Roll No of Student : "; 
        cin>>roll_no;                  
        cout<<"Enter the ID of Student : ";                   
        cin>>id;
    }

    void display()
    {
        cout<<"\nThe Name of Student : "<<name;
        cout<<"\nThe Roll No. of Student : "<<roll_no;
        cout<<"\nThe ID of Student : "<<id; 
    }
};

int main()
{
    // code by ali
    student s1,s2;
    s1.input();
    s2.input();
    s1.display();
    s2.display();
    return 0;
}
```