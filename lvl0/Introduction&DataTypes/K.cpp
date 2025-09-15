#include <iostream>

using namespace std;

int main() {
    // take input
    int a, b; cin >> a >> b;
    // you don't want integer division so you need to type cast or make them from the start float, double or long double
    cout << (float)(a-b)/3 + b << '\n';
    
    return 0;
}