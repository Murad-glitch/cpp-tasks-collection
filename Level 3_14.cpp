#include <iostream>
using namespace std;

int main() {
    int a=1;
    while(a <= 100){
        if(a % 3 == 0 && a % 7 == 0) {
          cout << a << " ";
          a++;
    }
    return 0;
}
