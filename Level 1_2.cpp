#include <iostream>
using namespace std;
int main() {
    int a, c;
    cin >> a;
    cin >> c;
    if(c > a) {
        swap(a, c);
    }
    cout << a + c << " " << a - c << " " << a / c << " " << a * c << endl;
    return 0;
}
