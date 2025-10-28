#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int N;
    cout<<"N: ";
    cin>>N;
    cout<<"Sade ededler: ";
    for(int i=2;i<N;i++){
        bool s=true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                s=false;
                break;
            }
        }
        if(s)
            cout<<i<<" ";
    }
    return 0;
}
