#include <iostream>

using std::cin;
using std::cout;

int main() {
    int number;
    cin >> number;

    for (int i = 2; i <= number; i++) {
        if (number % i == 0) {
            cout << i;
            break;
        }
    }
    return 0;
}
