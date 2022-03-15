```c++
#include<iostream>
#include<string>
using namespace std;
class student    //BASE CLASS OR PARENT CLASS OR SUPER CLASS
{
    protected:
    int roll_no;
    string name;
    float cgpa;
    public:
    student()
    {
        roll_no=10;
        name="Ali";
        cgpa=4.00;
    }
    student(int x,string y,float z)
    {
        roll_no=x;
        name=y;
        cgpa=z;
    }

    void input()
    {
        cout<<"Enter the Studnet Name: ";cin.ignore();getline(cin,name);
        cout<<"Enter the Studnet Roll No.: ";cin>>roll_no;
        cout<<"Enter the Studnet CGPA: ";cin>>cgpa;
    }
    void display()
    {
        cout<<"\n------Student Data-------\n";
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
};
class project_student : public student //DRIVE CLASS/ OR /CHILD CLASS //It is Method to make the Drive Class From the Basic class 
{
    private:
    int project_id;
    string title;      //it is the title of Project 
    public:
    project_student()
    {}
    project_student(int x,string y,float z,int a,string b)
    {
        student(x,y,z);    //HERe i can the value to the student Constructor
        project_id=a;
        title =b;
    }
    void input()
    {
        student::input();    //Input the Valuse by help of input function which is define in Super class
        cout<<"Enter the Project Title: ";cin.ignore();getline(cin,title);
        cout<<"Enter the Project ID.: ";cin>>project_id;
    }
    void display()
    {
        student::display();    //Display the Valuse by help of display function which is define in Super class
        cout<<"Project Title: "<<title<<endl;
        cout<<"Project ID: "<<project_id<<endl;
    }
};
int main()
{
    // Code by ALI
    student obj1,obj2(2,"Asgar",3.5);
    obj1.input();
    cout<<"\n------OUT PUT OF SUPER CLASS obj1 and obj2------\n";
    obj1.display();
    obj2.display();

    cout<<"\n------OUT PUT OF SUPER CLASS obj3 and obj4------\n";
    project_student obj3,obj4(4,"obj4",3.9,102,"1st_project");
    obj3.input();
    obj3.display();
    obj4.display();
    return 0;
}
```