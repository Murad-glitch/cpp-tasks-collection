#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if (a>90&&a<=100) {
        cout <<"A";
    }
    else if (a>80&&a<=90) {
        cout << "B";
    }
    else if (a>70&&a<=80) {
        cout << "C";
    }
    else if (a>60&&a<=70) {
        cout <<"D";
    }
    else if (a>50&&a<=60) {
        cout << "E";
    }
    else if (a>=0&&a<=50) {
        cout << "F";
    }
    else {
        cout << "Yanlış bal!";
    }
    return 0;
}
