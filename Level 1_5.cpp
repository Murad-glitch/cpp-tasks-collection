#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

int main()
{
    cout<<"Farenheytə keçmək istəsəz F, Selsiyə keçsəz S yazın";
    string t;
    cin>>t;
    float c;
    cin>>c;
    if (t=="F") {
        cout<<c*(9/5)+32;
    }
    if (t=="S") {
        cout<<(5/9)*(c-32);
    }
}
