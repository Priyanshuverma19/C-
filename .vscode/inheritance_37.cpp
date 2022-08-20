#include<iostream>
using namespace std;
//   Base class
class employee{
    
     public:
      int id;
         float salary; 
          employee(int inpid){
        id = inpid;
        salary = 34.0;
     }
     employee(){}
};
// derived class syntex
 /*
 class{{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
  { 
    class members/methods/etc...
  }

  Note:
  1.Default visivility mode is private
  2. public visivality mode: public members of the base class becoms public mambers of the derived class
  3. private visibality mode: public mambers of the base class becomes private mambers of the derived class
  4. private mamber are never inharit
  */

 // Creating a programmer class derived from employee base class
 
 class programer: employee{
    public:
    programer(int inpid){
        id = inpid;
    }
    int languagecode = 9;
    void getdata(){
        cout<<id<<endl;
    }
 };
int main(){
    employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programer skilif(10);
    cout<<skilif.languagecode<<endl;
    skilif.getdata();
    return 0; 
}