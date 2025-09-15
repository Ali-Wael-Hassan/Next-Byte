// This question will be replaced for some issues
#include <iostream>

using namespace std;

int main() {
    // take the input
    int a, b; cin >> a >> b;
    // for all numbers if you divide by 10 there will be two cases
    // 1: gives integer (remainder = 0)
    // 2: gives real number (remainder != 0)
    // remainder is the least number to subtract from the number to make it divisible by the denominator
    // so if i divided by 10 the remainder will always the last digit since it will try to make this digit 0
    cout << a%10 + b%10 << '\n';
    
    return 0;
}