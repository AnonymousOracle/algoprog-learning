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
    }

    for (int j = 0; j < number; j += 2) {
        cout << array[j] << " ";
    }
    return 0;
}
