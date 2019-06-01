#include <iostream>

using namespace std;

int main() {
    int rubles, kopecks, number;
    cin >> rubles >> kopecks >> number;

    int priceInKopecks = ((rubles * 100) + kopecks) * number;
    cout << (priceInKopecks / 100) << " " << (priceInKopecks % 100);

    return 0;
}
