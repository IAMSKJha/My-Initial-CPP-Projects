#include<iostream>
using namespace std;

// struct employee
// {
//     int eID;
//     char favChar;
//     float salary;
// };

// union money
// {   int rice;  //4bytes
//     char car;   // 1byte
//     float pounds; // 4bytes
// };


int main(){
    enum Meal {breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<m1<<endl; 
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car<<endl;

    // struct employee skj;
    // struct employee HS;
    // struct employee SK;
    // skj.eID =1;
    // skj.favChar ='c';
    // skj.salary = 150000000;
    // cout<<"This value is "<<skj.eID<<endl;
    // cout<<"This value is "<<skj.favChar<<endl;
    // cout<<"This value is "<<skj.salary<<endl;
    
    return 0;
}