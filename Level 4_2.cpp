#include<iostream>
using namespace std;

int main()
{
    int a,c;
    cout<<"a-nı daxil et: ";
    cin>>a;
    c=0;
    while (a>0) {
        c++;
        a=a/10;
    }
    cout<<c;    
    return 0;
}
