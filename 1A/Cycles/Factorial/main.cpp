#include <iostream>

using std::cin;
using std::cout;

int main() {
    int number;
    cin >> number;
    int result = 1;

    for (int i = 2; i <= number; i++) {
        result *= i;
    }
    cout << result;
    
    return 0;
}
