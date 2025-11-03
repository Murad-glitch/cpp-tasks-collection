#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    for(a=1;a<=1000;a++){
        b=a;
        c=0;
        while(b>0){
            c=c*10+b%10;
            b=b/10;
        }
        if(c==a){
            cout<<a<<endl;
        }
    }
    return 0;
}
