#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;
    public:
        void setId(void){
            cout<<"enter the id of emplyee"<<endl;
            cin>>id;
        }

        void getId(void){
            cout<<"The id of this employee is "<<id<<endl;
        }
};
int main(){
    // employee harry, rohan, lavish, shruti;
    // harry.setId();
    // harry.getId();
    employee fb[4];
    for (size_t i = 0; i < 4; i++)
    {
        
        fb[i].setId();
        fb[i].getId();

    }
    
    return 0;
}