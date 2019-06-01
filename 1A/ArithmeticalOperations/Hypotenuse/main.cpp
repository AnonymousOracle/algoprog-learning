#include <cmath>
#include <fstream>

using namespace std;

int main() {
    fstream inputFileStream("input.txt", ios::in);
    int cathetus1, cathetus2;

    inputFileStream >> cathetus1 >> cathetus2;
    inputFileStream.close();

    fstream outputFileStream("output.txt", ios::trunc | ios::out);

    outputFileStream << sqrt(pow(cathetus1, 2) + pow(cathetus2, 2));
    outputFileStream.close();
    return 0;
}