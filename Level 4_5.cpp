#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Ədəd: ";
    cin>>N;
    int s=0;
    for(int i=1;i<=N;i++){
        if(N%i==0)
            s++;
    }
    cout<<"Bölənlerin sayi: "<<s<<endl;
    return 0;
}
