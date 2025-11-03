#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    a=0;
    b=1;
    while(a<1000){
        cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
