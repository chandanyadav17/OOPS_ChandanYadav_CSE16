#include <iostream>
using namespace std;

//inline function
inline int square(int n){
    return n*n;
}

//function with default argument
int add(int a , int b = 10 ){
    return a+b;
}

//function overloading
int calculate(int a,int b){
    return a+b;
}

int calculate(int a,int b,int c){
    return a+b+c;
}

int calculate(double a,double b){
    return a*b;
}

int main(){
    cout << "inline function" << endl;
    cout << "square of 5"<< square(5) << endl;

    cout << "\n default argument function" << endl;
    cout << "add(30) = " << add(30) << endl;
    cout << "add(40,50) = " << add(40,50) << endl;

    cout << "function overloading" << endl;
    cout << "addition of two integers = " << calculate(20,300) << endl;
    cout << "addition of three integers = " << calculate(20,30,40) << endl;
    cout << "multiplication of two doubles = " << calculate(2.5,4.0) << endl;

    return 0;
}