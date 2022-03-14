#include<iostream>
#include<string>
using namespace std;
class student
{
    string name;
    float cgpa;
    int roll_no;
    static int x;      //I Use Static for x here to use it 
    public:
    student()
    {
        x++;
        roll_no=x;  //Now Roll Now is Increase Auto For Every Student Objext
    }
    student(string x,float y)
    {
        name=x;
        cgpa=y;
    }

    void input()
    {
        cout<<"Enter the Student Name: ";cin.ignore(); getline(cin,name);
        cout<<"Enter the Student CGPA: ";cin>>cgpa;
    }

    const void display()   //it is display function whish display the data and here we can't use any logic which can chng the value of any datatype
    {
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student Roll No: "<<roll_no<<endl;
        cout<<"Student CGPA: "<<cgpa<<endl;
    }

};
int student::x=0;   //Use for Same Memeory for many objects
int main()
{
    // code by ALI
    student obj1,obj2;  //in both obj1 and obj2 Roll No is Increase due to using static Function
    obj1.input();
    obj2.input();
    cout<<"\n\n-----OUTPUT OF OBJ1 AND OBJ2----\n\n";
    obj1.display();
    obj2.display();
    cout<<"\n\n-----OUTPUT OF STATIC OBJ3 ----\n\n";
    static student obj3("ali",3);
    obj3.display();           //In This Object Roll No Is Remain Same which is 0 because it is static Object    
    return 0;
}