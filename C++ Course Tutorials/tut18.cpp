#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}


int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

//Fibonacci Series step by step caluculation
//fib(5)
//fib(5)= fib(4)+fib(3)
//fib(5)= fib(2)+fib(3)+fib(1)+fib(2)
//fib(5)= fib(0)+fib(1)+fib(1)+fib(2)+1+fib(0)+fib(1)
//fib(5)= 1+1+1+fib(0)+fib(1)+1+1+1
//fib(5)= 1+1+1+1+1+1+1+1= 8


//Step by step caluculation of factorial(4)
//factorial(4) = 4 * factorial(3)
//factorial(4) = 4 * 3 * factorial(2)
//factorial(4) = 4 * 3 * 2 * factorial(1)
//factorial(4) = 4 * 3 * 2 * 1
//factorial(4) = 24
  
  //Factorial of a number:
    //6! = 6*5*4*3*2*1 = 720
    //0! = 1 by definition
    //1! = 1 by definition
    //n! = n * (n-1)!


int main(){
  
 int a;   
cout<<"Enter a number"<<endl;
cin>>a;
cout<<"The fibonacci sequence at position "<<a<<" is " <<fib(a)<<endl;
//cout<<"The factorial of "<<a<<" is " <<factorial(a)<<endl;
return 0;
}
