#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    // Creating a constructor
    // constructor is a special member function  with same name as of the class.
    // it is used to initilized the objects of its class
    // it is automatically invoked  whenever an object is created
    complex(void); //constructor declaration
    void printnumber(){
        cout<<"yournumber is "<<a<<"+"<<b<<"i"<<endl;
    }


};
complex :: complex(void)//------> this is a default constructor as it take no parameters
{
    a = 10;
    b = 20;
    // cout<<"Hello world";
}
int main(){
    complex c;
    c.printnumber();


    return 0;
}