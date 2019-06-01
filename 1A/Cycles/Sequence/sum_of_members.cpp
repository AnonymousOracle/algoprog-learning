#include <fstream>
#include <iostream>

using std::fstream;
using std::cout;

int main() {
    fstream input("input.txt");
    int sum = 0;
    int sequenceMember;
    while ((input >> sequenceMember) && (sequenceMember != 0)) {
        sum += sequenceMember;
    }

    cout << sum;
    return 0;
}
