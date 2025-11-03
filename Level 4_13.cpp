#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    b=0;
    c=0;
    cin>>a;
    for(d=0;d<a;d++){
        cin>>e;
        if(d%2==0){
            b=b+e;
        }
        else{
            c=c+e;
        }
    }
    cout<<b<<" "<<c;
    return 0;
}
