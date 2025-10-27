#include <iostream>
using namespace std;
int main() {
    int n,t,k,q;  
    cout<<"n-i daxil et: ";
    cin>>n;
    t=0;    
    k=n;    
    while (k>0) {
        q=k%10;
        t=t*10+q;
        k/=10;
    }
    cout << n << " ədədinin tərsi: " << t << endl;
    return 0;
}
