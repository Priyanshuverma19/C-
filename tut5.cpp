#include <iostream>
using namespace std;
//------->> Struct data type<<-------
typedef struct emloyee
{
    /* data */
    int id;
    char favChar;
    float salary;
} ep;

//------->>Union data type<<-------
union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main()
{
    // struct employee harry;
    // harry.id = 1;
    // harry.favchar= 'c';
    // harry.salary = 120000;
    // cout<<"the value is"<<harry.id ;

    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';

    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    cout << breakfast;
    cout << lunch;
    cout << dinner;

    return 0;
}