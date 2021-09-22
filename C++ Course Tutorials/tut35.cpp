#include<iostream>
using namespace std;

//Destructor never takes a argument nor does it return any value

class num{
    public:
    num(){
        count++;
        cout<<"This is the time when constructor is called for object number"<<count<<endl;
    }
};
int main(){

    return 0;
}