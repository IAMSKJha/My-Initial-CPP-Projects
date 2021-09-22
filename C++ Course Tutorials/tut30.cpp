#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y); //construtor declaration
    void printnumber()
    {
        cout << "The number gives " << a << " + " << b << " i " << endl;
    }
};

complex ::complex(int x, int y) //---> This is a parameterized constructor as it accepts 2 parmeters
{
    a = x;
    b = y;
}

int main()
{
    //Implicit call
    complex a(4, 6);
    a.printnumber();

    //Explicit call
    complex b = complex(7, 8);
    b.printnumber();
    return 0;
}