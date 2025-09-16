#include <iostream>

using namespace std;

int main() {
    // take input
    int n, m; cin >> n >> m;
    // we have n*m cells and we want to put domino pieces that takes two cells
    // so the answer is number of cells / 2 -> if there is real number just get the floor(integer part) only
    cout << n*m/2 << '\n';

    return 0;
}