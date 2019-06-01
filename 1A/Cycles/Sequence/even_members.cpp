#include <fstream>
#include <iostream>

using std::fstream;
using std::cout;

int main() {
    fstream input("input.txt");
    int evenMembers = 0;
    int sequenceMember;
    while ((input >> sequenceMember) && (sequenceMember != 0)) {
        if (sequenceMember % 2 == 0) {
            evenMembers++;
        }
    }

    cout << evenMembers;
    return 0;
}
