#include <iostream>

using namespace std;

int main() {
    int value;
    cin >> value;
    cout << ((value / 100) + ((value % 100) / 10) + (value % 10));
    return 0;
}