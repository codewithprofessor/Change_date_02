#include<iostream>
using namespace std;

struct  dat
{
    int rl;   //let assume that rl is rollnumber 
    int id;   //let id is any identity
};

void input(dat);        //here you can also type 'void input(dat a)'
void input_array(dat *a);    //here you can also type 'void input_array(dat a[]);

int main()
{
    // code by Ali
    dat a;
    dat b[2];
    input(a);              //this function the single variable
    input_array(b);          //memory remain same for both functions
    
    return 0;
}

void input(dat a)
{
    cout<<"Please enter the values for a and 1st Function \n";
    cout<<"Etner the Roll No. : ";
    cin>>a.rl;
    cout<<"Enter the ID : ";
    cin>>a.id; 
}

void input_array(dat a[])         // here you can also type 'void input_array(dat *a)'
{
    cout<<"Please enter the values for b and 2st Function \n";
    for(int i=0 ;i<2;i++)
    {
        cout<<"Etner the Roll No. : ";
        cin>>a[i].rl;
        cout<<"Enter the ID : ";
        cin>>a[i].id;

    }
}

