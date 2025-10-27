#include<iostream>
using namespace std;
int main()
{
    int a,c,s;
    a=100;
    c=1;
    s=0;
    while(a>c) {
        s=s+c;
        c=c+1;
    }    
    cout<<s;
    return 0;
}
