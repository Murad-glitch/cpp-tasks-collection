#include<iostream>
using namespace std;

int main(){
    int n, m, q, a=0;
    cout<<"Ədədi daxil edin: ";
    cin>>n;
    m=n;

    while(m>0){
        q=m%10;
        a=a+q*q;
        m=m/10;
    }

    if(a==n)
        cout<<n<<" rəqəmlərinin kvadratları cəminə bərabərdir."<<endl;
    else
        cout<<n<<" rəqəmlərinin kvadratları cəminə bərabər deyil."<<endl;

    return 0;
}
