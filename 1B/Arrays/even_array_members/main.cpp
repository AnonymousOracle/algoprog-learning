#include <fstream>
#include <iostream>

using std::ifstream;
using std::cout;
using std::endl;

int main() {
    ifstream input("input.txt");
    int number;
    input >> number;

    int* array = new int[number];
    for (int i = 0; i < number; i++) {
        input >> array[i];
        if (array[i] % 2 == 0) {
            cout << array[i] << " ";
        }
    }
    return 0;
}
