#include<iostream>
using namespace std;
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}


int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"enter the no ";
    cin>> n;
    // cout<<"factorial of the no is "<<factorial( n);
    cout<<"the terms in fibonacci sequance at position" <<n<<" is "<<fib( n);

return 0;
} 