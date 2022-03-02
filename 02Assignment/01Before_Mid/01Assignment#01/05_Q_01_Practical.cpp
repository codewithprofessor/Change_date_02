/*
Question 01:
Pakistan Super League (PSL) is in progress now a days and below is
the latest points table. Where Ties mean both teams played
equally and NR means No Result of the match. For Won 2 points
to the winning team and for Ties 1 point is given to each team.
Organizers contacted you to automate the Points Table for quick
access and do the following tasks:
*/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct  team
{
    string name;
    int mat,won,lost,ties,nr;
};

void input(team []);
void display(team []);
void search(team []);

int main()
{
    team a[6];
    input(a);
    display(a);
    search(a);
    return 0;
}

void input(team *a)
{
    for(int i=0;i<6;i++)
    {
        cout<<"Etner the Team Name: ";
        cin.ignore();
        getline(cin,a[i].name);
        cout<<"Total Matchs: ";
        cin>>a[i].mat;
        cout<<"Won Match: ";
        cin>>a[i].won;
        cout<<"Lost Matchs: ";
        cin>>a[i].lost;
        cout<<"Ties Match: ";
        cin>>a[i].ties;
        cout<<"No Result: ";
        cin>>a[i].nr;
    }
}

void display(team *a)
{
    cout<<setw(30)<<"Name"<<setw(5)<<"Mat"<<setw(5)<<"Won"<<setw(5)<<"Lost"<<setw(5)<<"Ties"<<setw(5)<<"NR"<<setw(5)<<"pts"<<endl;

    for(int i=0;i<6;i++)
    {
        cout<<setw(30)<<a[i].name<<setw(5)<<a[i].mat<<setw(5)<<a[i].won<<setw(5)<<a[i].lost<<setw(5)<<a[i].ties<<setw(5)<<a[i].nr<<setw(5)<<(a[i].won*2)+a[i].ties<<endl; 
    }
}

void search(team a[])
{
    string s;
    cout<<"Etner the Team Which you want to search : ";
    cin.ignore();
    getline(cin,s);

    for(int i=0;i<6;i++)
    {
        if(a[i].name == s)
        {
            cout<<setw(30)<<"Name"<<setw(5)<<"Mat"<<setw(5)<<"Won"<<setw(5)<<"Lost"<<setw(5)<<"Ties"<<setw(5)<<"NR"<<setw(5)<<"pts"<<endl;
            cout<<setw(30)<<a[i].name<<setw(5)<<a[i].mat<<setw(5)<<a[i].won<<setw(5)<<a[i].lost<<setw(5)<<a[i].ties<<setw(5)<<a[i].nr<<setw(5)<<(a[i].won*2)+a[i].ties<<endl; 
        }
    }
}