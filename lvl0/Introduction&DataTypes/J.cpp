#include <iostream>

using namespace std;

int main() {
    // take input
    int a, b; cin >> a >> b;
    // area = l*w, perimeter = 2*(l+w)
    cout << a*b << ' ' << 2*(a+b) << '\n';
    
    return 0;
}