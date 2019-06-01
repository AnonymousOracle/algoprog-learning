#include <iostream>

using namespace std;

int main() {
    long long minutes;
    cin >> minutes;

    int hours = minutes / 60;
    int shownMinutes = minutes % 60;

    int shownHours = hours % 24;
    cout << shownHours << " " << shownMinutes;
    return 0;
}
