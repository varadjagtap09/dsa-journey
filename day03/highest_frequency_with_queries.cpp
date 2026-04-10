#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    int arr[n];
    map<int ,int > mpp;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    int ans = arr[0];

    for (auto it : mpp){
        if (it.second > mpp[ans]){
            ans = it.first;
        }
    }

    cout << "highest " << ans << endl;

    int q;
    cin >> q;

    while (q--){
        int number;
        cin >> number;

        cout << mpp[number] << endl;
    }

    return 0;
}