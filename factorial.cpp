#include <bits/stdc++.h>
using namespace std;
int fac(int n){
    if (n==0)
        return 0;   // ❌ Problem here
    return n * fac(n-1);
}
int main(){
    int n;
    cin >> n;
    cout << fac(n);
}