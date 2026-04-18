#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(std ::vector<int>& arr) {
        int n = arr.size();
        int j = -1;

        // Step 1: find first zero
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                j = i;
                break;
            }
        }

        // if no zero found
        if (j == -1) return;

        // Step 2: move non-zero elements forward
        for (int i = j + 1; i < n; i++) {
            if (arr[i] != 0) {
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
};