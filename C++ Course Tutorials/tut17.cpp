#include<iostream>
using namespace std;

inline int product(int a, int b){
    //Not recommended to use static variables with inline functions
    //static int c=0; //This executes only once
    //c=c+1; //Next time when this function will run, the value of c will be retained 
    return a*b;
}
float moneyreceived(int currentmoney, float factor=1.05){
    return currentmoney * factor;
}

int main(){
    int a,b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    //cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyreceived(money)<< "Rs after one year \n";
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will receive "<<moneyreceived(money, 1.1)<< "Rs after one year";
    return 0;

