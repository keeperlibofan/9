#include <iostream>
using namespace std;

int main(void) {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}