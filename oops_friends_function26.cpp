#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend complex sumcomplex(complex o1, complex o2); // impoetant
    void printNumber()
    {
        cout << "your number is   " << a << " + " << b << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2;
    c1.setNumber(1, 4);
    c2.setNumber(5, 8);
    c1.printNumber();
    c2.printNumber();

    return 0;
}

/* properties of feiend function
1.   Not in the   scope of class
2.   since it is not in  the scope of the class, it cannot be called from the
    the  object of that class.   c1.sumComplex()  == Invalid 
3.   can be invoked  without the help of any object
4.   Usually contans the objects as arguments
5.   Can be declared inside public or private section of the class
6.  it cannot access the members directly by their names and need object_name.number_name
    to acces any member.

*/