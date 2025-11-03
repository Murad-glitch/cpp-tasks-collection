#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    b=0;
    c=a;
    while(c>0){
        b=b*10+c%10;
        c=c/10;
    }
    if(a==b){
        cout<<"Equal";
    }
    else{
        cout<<"NotEqual";
    }
    return 0;
}
