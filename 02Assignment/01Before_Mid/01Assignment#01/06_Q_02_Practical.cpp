/*
How to sourt the Array 
*/

#include<iostream>
using namespace std;

int main()
{
    // code by ali
    int array[6]={4,5,2,3,1,0};
    for(int i=0;i<6;i++)
    {
        for(int j=i;j<6;j++)
        {
            if(array[i]>array[j])
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    cout<<"The Accending Array: ";
    for(int i=0;i<6;i++)
    {
        cout<<array[i]<<"  ";
    }
    return 0;
}