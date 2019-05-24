#include <fstream>

using namespace std;

int main() {
    fstream inStream("input.txt", ios::in);
    long long temp;
    long long greatest;

    inStream >> temp;
    greatest = temp;
    
    while (static_cast<bool>(inStream >> temp)) {
        greatest = (temp > greatest) ? temp : greatest;
    }
    inStream.close();

    fstream outStream("output.txt", ios::out | ios::trunc);
    outStream << greatest;
    outStream.close();

    return 0;
}