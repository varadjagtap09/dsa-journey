#include <bits/stdc++.h>
using namespace std;

void f(int i, int n) {
    if (i > n) return;   // stop when i exceeds n
    cout << i << endl;
    f(i + 1, n);         // go to next number
}

int main() {
    int n;
    cin >> n;
    f(1, n);             // start from 1
}
