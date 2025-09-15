// This question will be replaced for some issues
#include <iostream>

using namespace std;

int main() {
    // take input
    int n; cin >> n;
    // 10^9 * (10^9 + 1) will overflow in 32-bit integer
    cout << (long long)n*(n+1)/2 << '\n';
    
    return 0;
}