#include<iostream>
using namespace std;
int main()
{
    int a,k,s;
    cout<<"a-nı daxil et: ";
    cin>>a;
    k=0;
    while (a>0) {
        s=a%10;
        a=a/10;
        k=k+s;
    }
    cout<<k;    
    return 0;
}
