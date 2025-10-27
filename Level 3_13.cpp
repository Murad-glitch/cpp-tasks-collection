#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    b=0;
    cin>>a;
    c=a;
    while(c > 0){
        b = b*10 + c%10;
        c /= 10;
    }
    cout<<b<<" ";
    if(a==b) {
        cout<<"Palindrom";
    }    
    else {
        cout << "Palindrom deyil";
    }    
    return 0;
}
