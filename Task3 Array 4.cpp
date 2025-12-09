#include <iostream>
#include <cmath>
using namespace std;

double o(int a[],int n){
    int i;
    double s=0,g=1;
    for(i=0;i<n/2;i++) s+=a[i];
    for(i=n/2;i<n;i++) g*=a[i];
    return (s/(n/2))+pow(g,1.0/(n/2));
}

int main(){
    int a[20];
    for(int i=0;i<20;i++) a[i]=i+1;
    cout<<o(a,20);
    return 0;
}