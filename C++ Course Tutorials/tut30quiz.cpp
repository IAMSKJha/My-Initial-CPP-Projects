#include <iostream>
#include <cmath>


using namespace std;

class point
{
    int x1, y1;
    int x2, y2;
   friend double distance();
public:
   double distance(double)
    {
        double result = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        return result ;
    }
    void entervalue()
    {   point p;
        cout << "Enter the value of x1" << endl;
        cin >> x1;
        cout << "Enter the value of y1" << endl;
        cin >> y1;
        cout << "Enter the value of x2" << endl;
        cin >> x2;
        cout << "Enter the value of y2" << endl;
        cin >> y2;
        cout << "The distance between points (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") will be"<<endl;
     
    }
};

int main()
{
    point p;

    p.entervalue();

    p.distance(1);
    

    return 0;
}