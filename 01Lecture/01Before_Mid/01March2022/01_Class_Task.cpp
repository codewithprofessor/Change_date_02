#include<iostream>
#include<string>
using namespace std;

class student 
{
    int rl;
    string nm;
    float c;
    public:
    void input()
    {
        cout<<"Enter The Student Name :";
        cin.ignore();
        getline(cin,nm);
        cout<<"Enter The Student Roll no : ";
        cin>>rl;
        cout<<"Enter The Student CGPA : ";
        cin>>c;
    }

    void display()
    {
        cout<<"Student Name : "<<nm<<endl;
        cout<<"Student Roll No : "<<rl<<endl;
        cout<<"Student CGPA : "<<c<<endl;
    }
    static void input(student *a,int b)
    {
        for(int i=0;i<b;i++)
        {
            cout<<"Enter The Student Name :";
            cin.ignore();
            getline(cin,a[i].nm);
            cout<<"Enter The Student Roll no : ";
            cin>>a[i].rl;
            cout<<"Enter The Student CGPA : ";
            cin>>a[i].c;
        }
    }

    static void display(student *a,int b)
    {
        for(int i=0;i<b;i++)
        {
            cout<<"Student Name : "<<a[i].nm<<endl;
            cout<<"Student Roll No : "<<a[i].rl<<endl;
            cout<<"Student CGPA : "<<a[i].c<<endl;
        }
    }
};
int main()
{
    student a[3];
    int n;
    cout<<"How much Student You Want to enter ";
    cin>>n;

    student *t =new student [n];

    for(int i=0 ;i<3;i++)
    {
        a[i].input();
    }
    for(int i=0 ;i<2;i++)
    {
        a[i].display();
    }
    // student ob;
    
    student::input(t,n);
    student::display(t,n);
    return 0;
}