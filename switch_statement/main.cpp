#include <iostream>
using namespace std;

int main() {
    int x = 3;
    switch(x) {
        case 2:
            x = 6;
            cout << x;
        case 3:
            x = 9;
            cout << x;
        case 4: 
            x = 7;
            cout << x;
            break;
        case 5:
            x = 8;
            cout << x;
    }
    cout << x;
    return 0; 
}