#include<iostream>
using namespace std;

//Volume of cylinder
float volume(double r, int h){
    return ( 3.14 * r * r * h);
}

//Volume of cuboid
int volume(int l ,int b , int h){
    return (l*b*h);
}

float volume(float a){
    return (a * a * a);
}

int main(){
    cout<< "The volume of cylinder is " <<volume(3, 3)<<endl;
    cout<<"The voulume of cuboid is " <<volume(3,3,4)<<endl;
    cout<<"The volume of cube is "<<volume(2.2)<<endl;

return 0;
}