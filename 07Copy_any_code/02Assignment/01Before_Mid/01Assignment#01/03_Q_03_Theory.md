```c++
/*
Write a C++ program that inputs 50 student’s data (with unique arid no.) and displays result in the
following format using display() function. Please note that the Total, %age and grade will be calculated
at run time using (A grade for >=80%, B for >=65%, C for >=50%, D for >=32% and F for less than 32%).
Once the input is done then call the sort () function which Sort the students on the basis of %age and
finally call the classSummary() function which displays the record of topper of the class and class
average.

St#  AridNo    StName   Subject1  Subject2  Subject3  Total  %age   Grade
 1   21-arid-12  Ali       80         90        70      240   80.00   A
 2   21-arid-21  Ahmad     70         65        80      215   71.67   B
--- --- --- --- --- --- ---

*/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct Student
{
string AridNo;
string StName;
int Subject1;
int Subject2;
int Subject3;
int Total;
int Percentage;
char Grade;
};
void display(Student []);
void sort(Student []);
void classSummary(Student []);
int main()
{
    // code by ali
    
    Student s[50];
    for(int i=0;i<2;i++)
    {
        cout<<"Enter AridNo:";
        cin.ignore();
        getline(cin,s[i].AridNo);
        cout<<"Enter Name:";
        getline(cin,s[i].StName);
        cout<<"Enter Marks of Subject1:";
        cin>>s[i].Subject1;
        cout<<"Enter Marks of Subject2:";
        cin>>s[i].Subject2;
        cout<<"Enter Marks of Subject3:";
        cin>>s[i].Subject3;
        s[i].Total=s[i].Subject1+s[i].Subject2+s[i].Subject3;
        s[i].Percentage=s[i].Total/300.0*100;
        if(s[i].Percentage>=80) s[i].Grade='A';
        else if(s[i].Percentage>=65) s[i].Grade='B';
        else if(s[i].Percentage>=50) s[i].Grade='C';
        else if(s[i].Percentage>=32) s[i].Grade='D';
        else s[i].Grade='F';
    }
    display(s);
    sort(s);
    classSummary(s);   
    return 0;
}

void display(Student s[])
{
    cout<<setw(3)<<"St#"<<setw(10)<<"AridNo"<<setw(20)<<"StName"
    <<setw(9)<<"Subject1"<<setw(9)<<"Subject2"<<setw(9)
    <<"Subject3"<<setw(6)<<"Total"<<setw(5)<<"%age"<<setw(5)<<"Grade"<<endl;
    for(int i=0;i<2;i++)
    {
        cout<<setw(3)<<(i+1)<<setw(10)<<s[i].AridNo<<setw(20)<<s[i].StName<<setw(9)<<s[i].Subject1<<setw(9)<<s[i].Subject2
        <<setw(9)<<s[i].Subject3<<setw(6)<<s[i].Total<<setw(5)<<s[i].Percentage<<setw(5)<<s[i].Grade<<endl;
    }
}
void sort(Student s[])
{
    for(int i=0;i<2-1;i++)
    {
        for(int j=i;j<2;j++)
        {
            if(s[i].Percentage<s[j].Percentage)
            {
                Student temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
}

void classSummary(Student s[])
{
    cout<<"\nStudent with higher Percentage is:\n";
    cout<<setw(3)<<"St#"<<setw(10)<<"AridNo"<<setw(20)<<"StName"
        <<setw(9)<<"Subject1"<<setw(9)<<"Subject2"<<setw(9)
        <<"Subject3"<<setw(6)<<"Total"<<setw(5)<<"%age"<<setw(5)<<"Grade"<<endl;
    for(int i=0;i<1;i++)
    {
        cout<<setw(3)<<(i+1)<<setw(10)<<s[i].AridNo<<setw(20)<<s[i].StName<<setw(9)<<s[i].Subject1<<setw(9)<<s[i].Subject2
        <<setw(9)<<s[i].Subject3<<setw(6)<<s[i].Total<<setw(5)<<s[i].Percentage<<setw(5)<<s[i].Grade<<endl;
    }
    
    
    int sum=0;
    for(int i=0;i<2;i++)
    {
    sum+=s[i].Percentage;
    }
    int average=sum/2;
    cout<<"\nAverage Percentage is:"<<average;
}

```