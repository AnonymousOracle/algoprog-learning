#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int hours1, minutes1, seconds1,
        hours2, minutes2, seconds2;
    cin >> hours1 >> minutes1 >> seconds1;
    cin >> hours2 >> minutes2 >> seconds2;

    int difference = ((hours2 * pow(60, 2)) + (minutes2 * 60) + seconds2) - ((hours1 * pow(60, 2)) + (minutes1 * 60) + seconds1);
    cout << difference;
    return 0;
}
