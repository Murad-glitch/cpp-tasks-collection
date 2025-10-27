#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if ((1<=a&&a<=2)||a==12) {
        cout<<"Qış";
    }
    else if (3<=a&&a<6) {
        cout<<"Yaz";
    }
    else if (6<=a&&a<9) {
        cout<<"Yay";
    }
    else if (9<=a&&a<12) {
        cout<<"Payız";
    }
    else {
        cout<<"Yanlış";
    }
    return 0;
}
