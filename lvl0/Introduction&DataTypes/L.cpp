#include <iostream>

using namespace std;

int main() {
    // take input
    int n; cin >> n;
    // Convert from seconds to hours
    int h = n / 3600;
    // the remainder is the minutes and seconds
    n %= 3600;
    // Convert from seconds to minutes
    int m = n/60;
    // the remainder is the seconds
    n %= 60;
    int s = n;
    cout << h << ':' << m << ':' << s << '\n';

    return 0;
}