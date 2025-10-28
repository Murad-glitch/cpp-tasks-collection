#include<iostream>
using namespace std;
int main()
{
    int a,s;
    cout<<"a-nı daxil et: ";
    cin>>a;
    s=1;
    while(a>0) {
        s=s*a;
        a=a-1;
    }
    cout<<s;    
    return 0;
}
