// This question will be replaced for some issues
#include <iostream>

using namespace std;

int main() {
    // take input
    int a, b, c, d; cin >> a >> b >> c >> d;
    // as befor 10^5 * 10^5 will overflow in 32-bit integer and you can use type cast or make the variables 64-bit integer
    cout << (long long) a * b - (long long) c * d << '\n';
    
    return 0;
}