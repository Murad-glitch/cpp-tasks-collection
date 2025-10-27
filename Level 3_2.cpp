#include<iostream>
using namespace std;
int main()
{
    int a,c;
    a=100;
    c=1;
    while(a>c) {
        if (c%2==0) {
            cout<<c<<endl;
        }    
        c=c+1;
    }    
    return 0;
}
