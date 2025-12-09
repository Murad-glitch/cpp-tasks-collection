#include <iostream>
using namespace std;

int m(int a[],int n){
    int i,k=1000000000;
    for(i=0;i<n;i++){
        if(a[i]>0 && a[i]<k) k=a[i];
    }
    return k;
}

int main(){
    int a[8]={11,0,-3,2,4,-6,3,-2};
    cout<<m(a,8);
    return 0;
}