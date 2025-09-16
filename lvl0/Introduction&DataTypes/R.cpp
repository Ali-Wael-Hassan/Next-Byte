#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    //take from 100 as much as you can
    int n100 = n/100;
    n %= 100;
    //take from 20 as much as you can
    int n20 = n/20;
    n %= 20;
    //take from 10 as much as you can
    int n10 = n/10;
    n %= 10;
    //take from 5 as much as you can
    int n5 = n/5;
    n %= 5;
    //the rest can be used with only 1
    int n1 = n;
    // print the total used of bills
    cout << n1+n5+n10+n20+n100 << '\n';

    return 0;
}