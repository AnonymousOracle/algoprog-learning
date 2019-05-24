#include <fstream>

using namespace std;

int main() {
    fstream inputFileStream("input.txt", ios::in);
    int min, max;

    inputFileStream >> min >> max;
    inputFileStream.close();

    fstream outputFileStream("output.txt", ios::trunc | ios::out);
    int iterator = min - 1;

    while (iterator <= (max - 1)) {
        outputFileStream << ((iterator % 2 == 0) ? (iterator + 2) : (iterator + 1)) << " ";
        iterator += 2;
    }
    outputFileStream.close();
    return 0;
}