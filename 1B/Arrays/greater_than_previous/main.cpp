#include <fstream>
#include <iostream>

using std::ifstream;
using std::cout;

int main() {
    ifstream input("input.txt");
    int number;
    input >> number;
    
    int* array = new int[number];
    for (int i = 0; i < number; i++) {
        input >> array[i];
    }
    
    int counter = 0;
    for (int j = 1; j < number; j++) {
        if (array[j] > array[j - 1]) {
            counter++;
        }
    }

    cout << counter;
    return 0;
}
