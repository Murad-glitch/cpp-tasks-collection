#include <iostream>
using namespace std;

int d(int a[],int n){
    int i,f=-1,l=-1;
    for(i=0;i<n;i++){
        if(a[i]==0){
            if(f==-1) f=i;
            l=i;
        }
    }
    return l-f;
}

int main(){
    int a[8]={1,0,2,3,4,5,0,7};
    cout<<d(a,8);
    return 0;
}