#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
    void setID(void){
        salary = 122;
      cout<<"Enter the ID of Employee"<<endl;
      cin>>id;
    }
    void getID(void){
        cout<<"The ID of this Employee is "<<id<<endl;
    }
};

int main(){
    // Employee SKJ, HS, Sk, SKJha;
    // SKJ.setID();
    // SKJ.getID();
    Employee HS[5];
    for ( int i = 0; i < 5; i++)
    {
       HS[i].setID();
       HS[i].getID();
    }
    
    return 0;
    }     

