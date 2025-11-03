#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    b=0;
    cin>>a;
    for(c=1;c<a;c++){
        if(a%c==0){
            b=b+c;
        }
    }
    if(b==a){
        cout<<"Mükəmməl";
    }
    else{
        cout<<"Deyil";
    }
    return 0;
}
