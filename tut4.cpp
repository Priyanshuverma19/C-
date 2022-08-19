#include<iostream>
using namespace std;
int main(){
    // what is pointer---->>data type which holds the address of otherdata
    int a= 3;
    int*b = &a;
    //&--->(address of)  operater

         cout<<"the addres of a is:"<<&a;
    cout<<"the addres of a is:"<<b;
    // --->(Value of )  Dereferencing operater

         cout<<"the value at addres b is is:"<<*b;


         //pointeer to pointer
         int**c= &b;
         cout<<"the address of b is"<<&b<<endl;
         cout<<"the address of b is "<<c<<endl;
         cout<<"the value at address c is "<<*c<<endl;
         cout <<"the value at address value at (value at(C)) is "<<**c<<endl;
         

return 0;
}