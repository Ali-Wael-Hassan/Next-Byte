#include <iostream>

using namespace std;

int main() {
    // take input
    int a, b, c; cin >> a >> b >> c;
    // we have a balls
    // we want to remove b balls so a - b
    // we want to add c -> a - b (from befor) + c
    cout << a - b + c << '\n';

    return 0;
}