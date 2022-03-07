#include<iostream>
#include<string>
using namespace std;

class mobile 
{
    // code by ali
    int model;
    string nm;
    int p;
    public:
    static void input(mobile *a,int b)
    {
        for(int i=0;i<b;i++)
        {
            cout<<"Etner the Model of Mobile : ";
            cin>>a[i].model;
            cout<<"Etner the Compeny Name of Mobile : ";
            cin.ignore();
            getline(cin,a[i].nm);
            cout<<"Etner the Price of Mobile : ";
            cin>>a[i].p;
        }
    }

    static void display(mobile *a,int b)
    {
        cout<<"The Mobile Data is \n";
        for(int i=0;i<b;i++)
        {
            cout<<"Model: "<<a[i].model<<endl;
            cout<<"Name:  "<<a[i].nm<<endl;
            cout<<"Price: "<<a[i].p<<endl;
        }
    }

};
int main()
{
    int n;
    cout<<"How Much Mobile You want to enter : ";
    cin>>n;
    mobile *a=new mobile[n];
    mobile::input(a,n);
    mobile::display(a,n);
    return 0;
}