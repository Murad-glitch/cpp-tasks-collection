#include<iostream>
using namespace std;
int main() {
    int il;
    cout << "Ili daxil edin: ";
    cin >> il;
    if ((il % 4 == 0 && il % 100 != 0) || (il % 400 == 0)) {
        cout << il << " ili artiq ildir.";
    } else {
        cout << il << " ili artiq il deyil.";
    }
    return 0;
}
