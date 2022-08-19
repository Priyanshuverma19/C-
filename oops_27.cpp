#include <iostream>
using namespace std;

// Forward declaration
class complex;

class calculater
{
public:
    int add(int a, int b)
    { 
        return (a + b);
    }
    int sumrealcomplex(complex , complex );
    
};

class complex
{
    int a, b;
    friend int calculater ::sumrealcomplex(complex, complex);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "your number is   " << a << " + " << b << "i" << endl;
    }
};
int calculater :: sumrealcomplex(complex o1,complex o2){
    return (o1.a + o2.b);
}

int main()
{
    complex o1,o2;
    o1.setNumber(1,4);
    o2.setNumber(5,7);
    calculater calc;
    int res = calc.sumrealcomplex(o1,o2);
    cout<<"the sum of real part of o1 and o2 is "<<res<<endl;       
    return 0;
}