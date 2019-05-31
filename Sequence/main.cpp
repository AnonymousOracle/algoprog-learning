#include <fstream>
#include <iostream>

using std::fstream;
using std::cout;

int main() {
    fstream input("input.txt");
    int length = 0;
    int sequenceMember;
    while ((input >> sequenceMember) && (sequenceMember != 0)) {
        length++;
    }

    cout << length;
    return 0;
}
