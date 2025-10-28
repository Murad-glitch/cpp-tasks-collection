#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,c,s;
    cout<<"a-nı daxil et: ";
    cin>>a;
    c=1;
    s=0;
    while(a>c) {
        if (c%2==0) {
            s=s+pow(c,2);
        }    
        c=c+1;
    }    
    cout<<s;
    return 0;
}
