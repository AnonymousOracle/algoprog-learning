#include <fstream>

using namespace std;

int sign(int x) {
    if (x > 0) {
        return 1;
    }
    else if (x < 0) {
        return -1;
    }
    else {
        return 0;
    }
}

int main() {
    fstream inputFileStream("input.txt", ios::in);
    int valueFromFile;

    inputFileStream >> valueFromFile;
    inputFileStream.close();

    fstream outputFileStream("output.txt", ios::trunc | ios::out);

    outputFileStream << sign(valueFromFile);
    outputFileStream.close();

    return 0;
}