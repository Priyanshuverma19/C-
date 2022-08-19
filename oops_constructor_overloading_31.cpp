#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    // ---->>>>>constructor overloading<<<<<<-------
    complex(int x,int y)//-------->constructor
    {
        a = x;
        b = y;
    }
    complex(int x)//------->constructor
    {
        a = x;
        b =0;
    }
    void printnumber(){
        cout<<"your number is"<<a<<"+"<<b<<endl;
    }

};
int main(){
    complex c1(4,6);
    c1.printnumber();
    complex c2(5);
    c2.printnumber();
    return 0;
}