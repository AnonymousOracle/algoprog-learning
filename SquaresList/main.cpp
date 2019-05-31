#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int threshold;
    cin >> threshold;

    int i = 1;
    while ((i*i) <= threshold) {
        cout << i*i << endl;
        i++;
    }
    return 0;
}
