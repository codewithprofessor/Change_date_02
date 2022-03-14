```c++
#include<iostream>
using namespace std;
class dis
{
    int feet;
    float inch;
    public:

    dis()
    {
        feet=0;
        inch=0;
    }
    
    dis(int x,float y) 
    {
        feet=x;
        inch=y;
    }
    
    void defalt(int x=0,float y=0)   //Use this function as a defalut function 
    {
        feet=x;
        inch=y;
    }
    void display()
    {
        cout<<"Feets: "<<feet<<"\'"<<endl;
        cout<<"Inchs: "<<inch<<"\""<<endl;
    }
};
int main()
{
    // code by ALI
    dis obj1,obj2(6,4),obj3;  //OBJ1 AND OBJ2 ARE FOR CONSTRUCTOR AND OBJ3 FOR TESTING FUNCTION  
    cout<<"\n---WHEN NO VALUES IS PASSED TO CONSTRUCTOR---\n\n";
    obj1.display();
    cout<<"\n---WHEN BOTH VALUES ARE PASSED CONSTRUTOR---\n\n";
    obj2.display();
    cout<<"\n\n\n---WHEN SINGLE VALUE IS PASSED TO FUNCTION---\n\n";
    obj3.defalt(7);    //by default this value is assign to x and feets 
    obj3.display();

    cout<<"\n---WHEN BOTH VALUES ARE PASSED TO FUNCTION---\n\n";
    obj3.defalt(7,5);   //7 is Assign to feet and 5 is assign to inch
    obj3.display();
    
    cout<<"\n---WHEN NO VALUE  IS PASSED TO FUNCTION---\n\n";
    obj3.defalt();      //here function use by default value which is 0and0
    obj3.display();   
    return 0;
}
```