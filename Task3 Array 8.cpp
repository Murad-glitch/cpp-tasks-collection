#include <iostream>
#include <cmath>
using namespace std;

void h(int a[],int n){
    int i,mn=a[0],mx=a[0];
    double s=0,g=1;
    for(i=0;i<n;i++){
        if(a[i]<mn) mn=a[i];
        if(a[i]>mx) mx=a[i];
        s+=a[i];
        g*=a[i];
    }
    cout<<mn<<" "<<mx<<" "<<s/n<<" "<<pow(g,1.0/n);
}

int main(){
    int a[25];
    for(int i=0;i<25;i++) a[i]=i+1;
    h(a,25);
    return 0;
}