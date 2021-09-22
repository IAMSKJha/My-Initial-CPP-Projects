#include<iostream>
using namespace std;

class bankdeposit{
    int pricipal;
    int years;
    float interestrate;
    float returnvalue;
    
    public:
    bankdeposit(){};
    bankdeposit(int p, int y, float r);// r can be value like 0.04
    bankdeposit(int p, int y, int r); //  r can be value like 14
    void show();
};

bankdeposit :: bankdeposit(int p, int y, float r)
{
     pricipal = p;
     years = y;
     interestrate = r;
     returnvalue = pricipal;
     for (int i = 0; i < y; i++)
     {
       returnvalue = returnvalue * (1+interestrate);
     }
     
}
bankdeposit :: bankdeposit(int p, int y, int r)
{
     pricipal = p;
     years = y;
     interestrate = float(r)/100;
     returnvalue = pricipal;
     for (int i = 0; i < y; i++)
     {
       returnvalue = returnvalue * (1+interestrate);
     }
     
}

void bankdeposit :: show(){
    cout<<endl<<"Principal amount was "<<pricipal<<". Return value after "<<years<<"yr is "<<returnvalue<<"."<<endl;
} 

int main(){
   bankdeposit bd1, bd2, bd3;
   int p,y;
   float r;
   int R;

   cout<<"Enter the value of p, y and r"<<endl;
   cin>>p>>y>>r;
   bd1 = bankdeposit(p,y,r);
   bd1.show();
 
   cout<<"Enter the value of p, y and R"<<endl;
   cin>>p>>y>>R;
   bd2 = bankdeposit(p,y,R);
   bd2.show();

    return 0;
}