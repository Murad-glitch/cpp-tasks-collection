#include <iostream>
using namespace std;

int main() {
    int a,b,n,c,i;
    a=0;
    b=1;
    cin >> n;
    for(i=0;i<n;i++){
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
