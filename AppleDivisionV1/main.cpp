#include <fstream>

using namespace std;

int main() {
    fstream inputFileStream("input.txt", ios::in);
    int numberOfStudents, numberOfApples;

    inputFileStream >> numberOfStudents >> numberOfApples;
    inputFileStream.close();

    fstream outputFileStream("output.txt", ios::trunc | ios::out);

    outputFileStream << (numberOfApples / numberOfStudents);
    outputFileStream.close();
    return 0;
}