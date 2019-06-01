#include <iostream>

using std::cin;
using std::cout;

int main() {
    int min,
    max;
    cin >> min >> max;
    for (int i = min; i < max + 1; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
}
