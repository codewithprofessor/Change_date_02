```c++
/*
Question 02
(Marks 8)
Write a C++ program which initializes a two-dimensional array A in the
main function with the values shown in the right table. Pass this array from main function to a user
defined function display (), which will count and display the total no of odd, even, positive and zeros
present in the given array. Overload the display function by passing an additional arguments X and Y of
type int, which will return value present at X th row and Y th column of the 2-D array.
*/
#include<iostream>
using namespace std;
void display(int a[][5]);
int display(int a[][5], int X, int Y);
int main()
{
    // code by ali
    int a[][5]={4,3,1,-2,56,
                63,2,12,5,8,
                27,55,89,7,57,
                22,17,5,-7,-25,
                32,25,27,4,6};
    
    display(a);
    

    
    return 0;
}

void display(int a[][5])
{
    int odd=0,even=0,positive=0,zero=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i][j]%2==0)
            {
                even++;
            }
            if(a[i][j]==0)
            {
                zero++;
            }
            if(a[i][j]%2!=0)
            {
                odd++;
            }
            if(a[i][j]>0)
            {
                positive++;
            }
        }
    }
    
    cout<<"No of Odd: "<<odd<<endl;
    cout<<"No of Even: "<<even<<endl;
    cout<<"No of Zero: "<<zero<<endl;
    cout<<"No of Positive: "<<positive<<endl;

}

int display(int a[][5], int X, int Y)
{
return a[X][Y];
}
```