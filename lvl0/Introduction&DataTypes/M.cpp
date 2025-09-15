#include <iostream>

using namespace std;

int main() {
    // take input
    int n; cin >> n;
    // all of them are three-leaf colover except one
    // 4 for the exceptino and the n-1 is three-leaf clover
    cout << 4 + (n-1) * 3 << '\n';

    return 0;
}