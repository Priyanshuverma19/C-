#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
     complex(int,int); // constructor decleration

     void printnumber(){
        cout<< "your number is "<<a<<"+"<<b<<"i"<< endl;
     }
};
//complex :: complex(int x, int y)----> this is default constructor
complex :: complex(int x, int y) //---> this is paramiteris construcrtor
{
    a = x;
    b = y;
}
int main(){
    //  Implicit call
    complex a(4,6);
    //Explicit call
    complex b = complex(5,7);
    a.printnumber();
    b.printnumber();
    return 0;
}