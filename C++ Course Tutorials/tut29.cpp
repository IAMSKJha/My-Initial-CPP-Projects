#include<iostream>
using namespace std;
class complex{
      int a,b;
      public:
      //Creating a constructor :
      //Constructor is a special member function with the same name as of the calss.
      //It is used to initialize objects of its calss.
      //It is automatically invoked whenever an object is created.
      complex(void);//Constructor declaration
      void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex :: complex(void)// ----> This is a default constructor & it accepts no parameters
{
    a=10;
    b=0;
}

int main(){
    complex c1,c2,c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    
    return 0;
}

/*Characteristics of Constructors:
1. It should be declared in the public section of class.
2. They are automatically invoked whenever the object is created.
3. They cannot return values and do not have return types.
4. It can have default arguments.
5. We cannot refer to their address. */