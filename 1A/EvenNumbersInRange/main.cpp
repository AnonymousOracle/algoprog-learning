#include <fstream>

using namespace std;

int main() {
    fstream inputFileStream("input.txt", ios::in);
    int min, max;

    inputFileStream >> min >> max;
    inputFileStream.close();

    fstream outputFileStream("output.txt", ios::trunc | ios::out);
    int lowerThreshold = (min % 2 == 0) ? (min - 2) : (min - 1);
    
    int factor = 1;
    while ((lowerThreshold + 2*factor) <= max) {
        outputFileStream << (lowerThreshold + 2*factor) << " ";
        factor++;
    }

    outputFileStream.close();
    return 0;
}
