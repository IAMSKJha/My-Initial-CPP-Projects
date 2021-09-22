#include <iostream>
using namespace std;

//Base Class
class employee
{int name;
public:
    int id;
    float salary;
    employee(int inpID)
    {
        id = inpID;
        salary = 100.55;
    }
    employee(){} //default constructor for employee
};

//Creating Programmer class derived from employee base class
class programmer : public employee
{
public:
    int languagecode;
    float salary;
    programmer(int inpID)
    {
        id = inpID;
        languagecode = 9;
        salary = 192.45;
    }
    void getdata()
    {
        cout << id << endl;
    }
   
};

int main()
{
    employee shiv(1), heroes(2);
    cout << shiv.salary << endl;
    cout << heroes.salary << endl;

    programmer strike(3);
    cout << strike.languagecode << endl;
    cout << strike.id << endl;
    cout << strike.salary<< endl;
    strike.getdata();
  


    return 0;
} 