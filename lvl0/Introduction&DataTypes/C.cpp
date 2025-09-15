// This question will be replaced for some issues
#include <iostream>

using namespace std;

int main() {
    // take the input
    int a, b; cin >> a >> b;
    // printing a + b = (a+b) and new line for the next input
    cout << a << " + " << b << " = " << a + b << '\n';
    // printing a * b = (a*b) and new line for the next input
    // note that we need them as 64-bit integer or 10^5 * 10^5 = 10^10 will overflow in 32-bit
    // you can also make the variables from the start long long a, b; then no need for type casting
    cout << a << " * " << b << " = " << (long long) a * b << '\n';
    // printing a - b = (a-b) and new line because the problem needs newline at the end of each line or will give Wrong Answer
    cout << a << " - " << b << " = " << a - b << '\n';
    
    return 0;
}