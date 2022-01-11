#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    string n;
    cout<<"Enter String:"<<endl;
    cin>>n;
    reverse(n.begin(), n.end());
    cout << n;
    return 0;
}
