#include <iostream>
using namespace std;

void c(int a[],int b[],int n,int m){
    int i,x=0,y=0,t;
    for(i=1;i<n;i++) if(a[i]>a[x]) x=i;
    for(i=1;i<m;i++) if(b[i]>b[y]) y=i;
    t=a[x];
    a[x]=b[y];
    b[y]=t;
}

int main(){
    int a[5]={3,9,1,4,2};
    int b[5]={8,7,6,5,4};
    c(a,b,5,5);
    for(int i=0;i<5;i++) cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0;i<5;i++) cout<<b[i]<<" ";
    return 0;
}