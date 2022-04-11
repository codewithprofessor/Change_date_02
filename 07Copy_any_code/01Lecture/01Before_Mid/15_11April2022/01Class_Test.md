```c++
#include<iostream>
#include<string>
using namespace std;
class uds         //uds = user define 
{
    char c[500];
    public:
    void getinput()       //This function just get the data from the user
    {
        cout<<"Enter the String: ";
        cin.getline(c,500);
    }
    uds cancate(uds a)    //This Function Copy the 2 String in single string and Return the Single String. 
    {
        int i=0,j=0;
        uds result;
        while(c[i]!=0)    //This loop copy the obj in Result which we use to call the function.
        {
            result.c[i]=c[i];
            i++;
        }
        while(c[j]!=0)    //This loop copy the passing obj in Result which we pass from main function.
        {
            result.c[i]=a.c[j];
            i++;
            j++;
        }
        result.c[i]=0;
        return result;
    }
    void del(int i,int j)    //this function Delete the some charecter in the string 
    {
        i--;                 //where i is the Position and use (i--) for user 
        j+=i;                //j is No. of del charecter
        while(c[i]!=0)
        {
            c[i]=c[j];
            i++;
            j++;
        }
    }
    void display()          //simply display function
    {
        cout<<"The obj3 is \n";
        int i=0;
        while(c[i]!=0)
        {
            cout<<c[i];
            i++;
        }
    }
};
int main()
{
    // code by ALI
    uds obj1,obj2,obj3;
    obj1.getinput();
    cout<<"Second String \n";
    obj2.getinput();
    obj3=obj1.cancate(obj2);
    obj3.del(3,4);
    obj3.display();
    
    return 0;
}
```