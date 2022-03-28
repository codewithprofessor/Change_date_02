/*
5. Start with the date structure in Exercise 5 in Chapter 4 and transform it into a date
class. Its member data should consist of three ints: month, day, and year. It should also
have two member functions: getdate(), which allows the user to enter a date in
12/31/02 format, and showdate(), which displays the date.
*/
#include<iostream>
using namespace std;
class date
{
    int month;
    int day;
    int year;
    public:
    void getdate()
    {
        cout<<"Enter Month: ";cin>>month;
        cout<<"Enter Day: ";cin>>day;
        cout<<"Enter Year: ";cin>>year;
    }
    void showdate()
    {
        cout<<"DATE:\n\t"<<month<<"/"<<day<<"/"<<year;
    }
};
int main()
{
    // code by ALI
    date obj1;
    obj1.getdate();
    obj1.showdate();
    return 0;
}