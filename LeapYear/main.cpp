#include <fstream>

using namespace std;

int main() {
    fstream inputFileStream("input.txt", ios::in);
    int year;
    
    inputFileStream >> year;
    inputFileStream.close();

    fstream outputFileStream("output.txt", ios::trunc | ios::out);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        outputFileStream << "YES";
    }
    else {
        outputFileStream << "NO";
    }
    outputFileStream.close();
    return 0;
}