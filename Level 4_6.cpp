#include<iostream>
using namespace std;

int main(){
    int a,s,l,k,t,z,p;
    s=0;k=0;z=-999999;p=999999;
    cout<<"Neçə ədəd daxil edirsiz: ";
    cin>>a;
    cout<<"Ədədləri daxil edin: ";
    while(s<a){
        cin>>t;
        if(t>z)z=t;
        if(t<p)p=t;
        k=k+t;
        s++;
    }
    cout<<"Orta: "<<(float)k/a<<endl;
    cout<<"Ən böyük: "<<z<<endl;
    cout<<"Ən kiçik: "<<p<<endl;
    return 0;
}
