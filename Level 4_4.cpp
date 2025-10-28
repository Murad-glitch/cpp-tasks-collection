#include<iostream>
using namespace std;
int main(){
    cout<<"Reqemler cemi 10 olanlar: ";
    for(int i=100;i<=999;i++){
        int t=i,c=0;
        c=t%10; t/=10;
        c+=t%10; t/=10;
        c+=t;
        if(c==10) cout<<i<<" ";
    }
    return 0;
}
