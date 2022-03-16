#include<iostream>
using namespace std;
class employee    // Its a Superclass
{
    protected:
    string name;
    int number;
    public:
    void setdata()
    {
        cout<<"Enter Name : ";cin.ignore();
        getline(cin,name);
        cout<<"Enter No.: ";cin>>number;
    }
    void putdata()
    {
        cout<<"\n------EMPLOYEE DATA-------\n\n";
        cout<<"Name: "<<name<<endl;
        cout<<"No.: "<<number<<endl;
    }
};

class manger : public employee
{
    private:
    string title;
    int club_dues;
    public:

    void setdata()
    {
        employee::setdata();
        cout<<"Enter Title : ";cin.ignore();
        getline(cin,title);
        cout<<"Enter Club Dues.: ";cin>>club_dues;
    }
    void putdata()
    {
        employee::putdata();
        cout<<"Title: "<<title<<endl;
        cout<<"Club Dues: "<<club_dues<<endl;
    }

};
class scientist : public employee
{
    private:
    int publication;
    public:

    void setdata()
    {
        employee::setdata();
        cout<<"Enter Publication.: ";cin>>publication;
    }
    void putdata()
    {
        employee::putdata();
        cout<<"Publication: "<<publication<<endl;
    }

};
class labour : public employee
{

};

int main()
{
    // Code by ALI

    employee obj1;
    cout<<"------ENTER THE DATA FOR EMPOLYEE----\n";
    obj1.setdata();
    obj1.putdata();
    manger obj2;
    cout<<"------ENTER THE DATA FOR Manger----\n";
    obj2.setdata();
    obj2.putdata();
    scientist obj3;
    cout<<"------ENTER THE DATA FOR Scientist----\n";
    obj3.setdata();
    obj3.putdata();
    labour obj4;
    cout<<"------ENTER THE DATA FOR Labour----\n";
    obj4.setdata();
    obj4.putdata();
    return 0;
}