#include <iostream>

using namespace std;

int main() {
    // take input
    int x, y; cin >> x >> y;
    // from a to b costs x
    // from b to c cost y/2 since we have 50% discount
    cout << x + y/2 << '\n';

    return 0;
}