#include <iostream>
using namespace std;

void s(int a[],int n){
    int i,j,t;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}

int main(){
    int a[6]={5,1,9,3,2,7};
    s(a,6);
    for(int i=0;i<6;i++) cout<<a[i]<<" ";
    return 0;
}