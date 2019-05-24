#include <fstream>

using namespace std;

int main() {
    fstream inputFileStream("input.txt", ios::in);
    int valueFromFile;

    inputFileStream >> valueFromFile;
    inputFileStream.close();

    fstream outputFileStream("output.txt", ios::trunc | ios::out);

    outputFileStream << "The next number for the number " << valueFromFile << " is " << (valueFromFile + 1) << "." << endl;
    outputFileStream << "The previous number for the number " << valueFromFile << " is " << (valueFromFile - 1) << "." << endl;
    outputFileStream.close();
    return 0;
}