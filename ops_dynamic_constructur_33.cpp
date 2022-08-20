#include<iostream>
using namespace std;
class bankdeposit{
    int principal;
    int years;
    float interestrate;
    float returnvalue;
    public:
    bankdeposit(){}
    bankdeposit(int p,int y,float r); // r can be a value like 0.04

    bankdeposit(int p,int y, int r);  //  r can be a value like 14
    void shoe();

};
bankdeposit ::bankdeposit(int p,int y,float r){
    principal = p;
    years = y;
    interestrate = r;
    returnvalue = principal;
    for( int i = 0; i<y; i++){
        returnvalue = returnvalue *(1+r);

    }
}
bankdeposit ::bankdeposit(int p,int y,int r){
    principal = p;
    years = y;
    interestrate = float(r)/100;
    returnvalue = principal;
    for( int i = 0; i<y; i++){
        returnvalue = returnvalue *(1+r);
}
}
void bankdeposit :: show(){
    cout<<endl<<"principal amount was "<<principal<<endl
    <<"return value after"<<years
    <<"is"<< returnvalue<<endl;

}  
int ain(){
    return 0;
}