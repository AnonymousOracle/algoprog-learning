#include <fstream>
#include <iostream>

using namespace std;

int main() {
    fstream input("input.txt", ios::in);
    int numberOfValues = 0;
    input >> numberOfValues;

    bool isZero = false;
    for (int i = 0; i < numberOfValues; i++) {
        int value;
        input >> value;
        if (value == 0) {
            isZero = true;
        }
    }
    
    fstream output("output.txt", ios::out | ios::trunc);
    if (isZero) {
        output << "YES";
    }
    else {
        output << "NO";
    }
    
    return 0;
}
