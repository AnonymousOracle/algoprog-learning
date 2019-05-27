#include <iostream>

using namespace std;

int main() {
    int numberOfValues;
    cin >> numberOfValues;

    bool isZeroHere = false;
    for (int i = 0; i < numberOfValues; i++) {
        int value;
        cin >> value;
        isZeroHere = ((value == 0) ? true : false);
    }

    cout << ((isZeroHere) ? "YES" : "NO");
    return 0;
}
