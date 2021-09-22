#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // int a = 34;
    // cout<< "The value of a was: "<<a<<endl;
    //  a=45;
    // cout<<"The value of a is: "<<a<<endl;
 
    // //Constants in C++
    //  const int x = 3;
    // cout<<"The value of x was: "<<x<<endl;
    // x = 5; //You will get an error because x is constant as const is used before x
    //  cout<<"The value of x was: "<<x;

    //************Manipulators in C++*************

    // int a = 3, b = 45, c = 2323;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;
    // cout<<endl;

    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;

    //********Operator Precedence*****************
    int a=3, b=4;
    int c= (a*5)+b;
    cout<<c;


       return 0;
}