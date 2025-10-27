#include <iostream>
using namespace std;

int main() {
    int n,a,b,t;
    a=0;
    t=0;
    cin>>n;
    while(a < n){
        cin>>b;
        t+=b;
        a=a+1;
    }
    cout << t;
    return 0;
}
