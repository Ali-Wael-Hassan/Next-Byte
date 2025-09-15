#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int h = n / 3600, m = (n-h*3600)/60, s = n - 3600*h - 60*m;
    cout << h << ':' << m << ':' << s << '\n';

    return 0;
}