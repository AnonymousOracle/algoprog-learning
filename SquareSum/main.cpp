#include <iostream>

using std::cin,
std::cout;

int main() {
    int value;
    cin >> value;
    int result = 0;

    for (int i = 1; i <= value; i++) {
        result += (i * i);
    }

    cout << result;
    return 0;
}
