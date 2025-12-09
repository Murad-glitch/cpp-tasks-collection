#include <iostream>
using namespace std;

int s2(int a[],int n,int b,int c){
    int i,t=0;
    for(i=0;i<n;i++){
        if(a[i]>b && a[i]<c) t+=a[i];
    }
    return t;
}

int main(){
    int a[10]={1,4,7,2,9,12,3,8,6,5};
    cout<<s2(a,10,3,9);
    return 0;
}