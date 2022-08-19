#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int e, d;
    void setData(int a1, int b1, int c1);  // Deleration
    void getData()
    {
        cout << "this value of a is" << a << endl;
        cout << "this value of b is" << b << endl;
        cout << "this value of c is" << c << endl;
        cout << "this value of d is" << d << endl;
        cout << "this value of e is" << e << endl;
    }
};

void employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee harry;
   // harry.a = 134; ---> this will throw error as a private
    harry.d = 34;
    harry.e = 89;
    harry.setData(1,2,4);
    harry.getData();
    return 0;
}