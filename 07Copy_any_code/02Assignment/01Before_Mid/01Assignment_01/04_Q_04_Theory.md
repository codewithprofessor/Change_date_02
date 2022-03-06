```c++
/*
Question 04
Write a C++ program to accept a 3 X 4 matrix having integer values. Accept another 4 X 3 matrix having
integer values. You are required to multiply these matrices and display the resultant matrix.
*/
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    int A[3][4];
    int B[4][3];
    int C[3][3];
    cout<<"Enter the Value of Matrix A\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++)
            cin>>A[i][j];
    cout<<"Etner the Value of Matrix B\n";        
    for(int i=0;i<4;i++)
        for(int j=0;j<3;j++)
            cin>>B[i][j];
    cout<<"The Result is \n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            C[i][j]=A[i][0]*B[0][j]+A[i][1]*B[1][j]+A[i][2]*B[2][j]+A[i][3]*B[3][j];
    for(int i=0;i<3;i++)
    { for(int j=0;j<3;j++)
    cout<<C[i][j]<<'\t';
    cout<<endl;
    }
    return 0;
}
```