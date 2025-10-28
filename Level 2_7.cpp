#include<iostream>
using namespace std;
int main()
{
    int a,c;
    cin>>a;
    string t;
    cin>>t;
    cin>>c;
    if (t=="+") {
        cout<<a+c;
    }
    else if (t=="-") {
        cout<<a-c;
    }
    else if (t=="/") {
        cout<<a/c;
    }
    else if(t=="*") {
        cout<<a*c;
    }
    return 0;
}
