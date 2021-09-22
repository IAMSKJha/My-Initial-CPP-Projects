 #include <iostream>
 #include <cmath>
 using namespace std;

int ch;
double x;
double y;
double a;
double b;
double answer;

double distanceBetweenTwoPoints(double x, double y, double a, double b);

int main(){

        cout << "Enter the points for the coordinates"<<endl;
        
        cout << "Point x for first coordinates: "<<endl;
        cin >> x;
        cout << "Point y for first coordinate: "<<endl;
        cin >> y;
        cout << "Point x for the second coordinate: "<<endl;
        cin >> a;
        cout << "Point y for the second coordinate: "<<endl;
        cin >> b;
        answer = distanceBetweenTwoPoints(x, y, a, b);

        cout << "The answer is " << answer;
}

double distanceBetweenTwoPoints(double x, double y, double a, double b){
return sqrt(pow(x - a, 2) + pow(y - b, 2));
}