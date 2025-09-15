#include <iostream>

using namespace std;

int main() {
    // take input
    int d1, d2, d3; cin >> d1 >> d2 >> d3;
    // in dice top + bottom = 7
    // we want the sum of bottom and we only have top so the bottom is 7 - top
    // 7 - d1 + 7 - d2 + 7 - d3 = 3*7 - d1 - d2 - d3
    cout << 3*7 - d1 - d2 - d3 << '\n';

    return 0;
}