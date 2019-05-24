#include <iostream>

using namespace std;

int main() {
    long long minutes;
    cin >> minutes;

    int hours = minutes / 60;
    int shownMinutes = minutes % 60;

    int shownHours = (hours <= 23) ? hours : (hours - (24 * (minutes / (60 * 24))));
    cout << shownHours << " " << shownMinutes;
    return 0;
}
