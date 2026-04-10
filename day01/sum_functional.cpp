#include <bits/stdc++.h>
using namespace std;

int f(int n){
    if(n == 0) return 0;   // Base case
    return n + f(n - 1);   // Add n to sum of 1..(n-1)
}

int main(){
    int n;
    cin >> n;
    cout << f(n);           // Print the result
}