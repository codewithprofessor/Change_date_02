/*Assuming there is no error, without changing the existing code, fill the 3 lines with suitable statements
for the output given on right side:
*/
#include<iostream>
using namespace std;

int main()
{
    // by ali
    int var1=3;
    int var2=24;
    float var3=17.5;
    float *fptr=&var3;
    int *iptr=&var1;
    void *vptr=&var2;
    
    cout << fptr<<endl << *iptr<<endl << vptr<<endl;
    vptr=&var3;
    cout <<vptr; 

    
    return 0;
}