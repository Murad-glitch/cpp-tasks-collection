#include <iostream>
using namespace std;

void y(int a[],int n,int b[],int m,int k,int r[]){
    int i,j=0;
    for(i=0;i<=k;i++) r[j++]=a[i];
    for(i=0;i<m;i++) r[j++]=b[i];
    for(i=k+1;i<n;i++) r[j++]=a[i];
}

int main(){
    int a[5]={1,2,3,4,5};
    int b[3]={7,8,9};
    int r[20];
    y(a,5,b,3,2,r);
    for(int i=0;i<8;i++) cout<<r[i]<<" ";
    return 0;
}