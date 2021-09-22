#include<iostream>
using namespace std;

class shop {
private: 

void itemgetprice();
void itemsellprice();

public:
void shop_id();
void itemavailable();
void itemrequired();
};


void shop :: shop_id(){
    string s;
    cout<<"Enter the shop ID no. "<<endl;
    cin>>s;
}
int main(){
    shop k;
    k.shop_id();

    
    return 0;
}