#include <iostream>
using namespace std;

int main() {
    int a,b=1;
    cin>>a;
    while(b <= a){
        if(a%b==0) {
            cout<<b<<" ";
        }    
        b++;
    }
    return 0;
}
