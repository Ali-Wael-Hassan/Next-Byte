#include <iostream>

using namespace std;

int main() {
    // take input
    int d, v1, v2; cin >> d >> v1 >> v2;
    // d1 = v1 * t
    // d2 = v2 * t
    // d = d1 + d2
    // d = t * (v1+v2)
    // t = d/(v1+v2)
    float t = (float)d/(v1+v2);
    cout << t*v1 << '\n';

    return 0;
}