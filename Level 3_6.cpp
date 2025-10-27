#include<iostream>
using namespace std;
int main()
{
    int a,k,s;
    cout<<"a-nı daxil et: ";
    cin>>a;
    k=1;
    s=0;
    while (a>k) {
        s=s+k;
        k+=1;
    }
    cout<<s;    
    return 0;
}
