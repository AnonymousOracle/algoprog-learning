#include <fstream>

using namespace std;

int main() {
    fstream inputFileStream("input.txt", ios::in);

    int number1, number2;

    inputFileStream >> number1 >> number2;
    inputFileStream.close();

    fstream outputFileStream("output.txt", ios::out | ios::trunc);
    if (number1 > number2) {
        outputFileStream << number1;
    }
    else {
        outputFileStream << number2;
    }
    outputFileStream.close();

    return 0;
}