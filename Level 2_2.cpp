#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if (a>0) {
        cout<<"Müsbətdir: ";
    }
    if (a<0) {
        cout<<"Mənfidir: ";
    }
    if (a==0) {
        cout<<"0 a bərabərdir: ";
    }
    return 0;
}
