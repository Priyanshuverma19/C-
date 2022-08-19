#include <iostream>
using namespace std;
class employee
{
    int id;
    
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    } 
    void getData(void)
    {

        cout << "the id of this employee is" << id<<"and this is employee number "<<count<<endl;
    }
};
int employee:: count; //Default value is  0
int main()
{
    employee harry, rohan, lavish;
    // harry.id = 1;
    // harry.count = 2;  // can not do this as id and count are private
    harry.setData();
    harry.getData();

    rohan.setData();
    rohan.getData();

    lavish.getData();
    lavish.setData();
    return 0;
}