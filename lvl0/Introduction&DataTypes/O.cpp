#include <iostream>

using namespace std;

int main() {
    // take input
    int x, y; cin >> x >> y;
    // the whole video is x minutes and we will speed y minutes
    // the untouched is x - y
    // the y minutes will be x2 speed so will take y/2 and no need for float since y is even
    cout << x - y + y/2 << '\n';

    return 0;
}