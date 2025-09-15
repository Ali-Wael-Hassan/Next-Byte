#include <iostream>

using namespace std;

int main() {
    // take input
    int n, a; cin >> n >> a;
    // n*n is all squares and a are the white ones so the black is all except a which is n^2 - a
    cout << n*n - a << '\n';

    return 0;
}