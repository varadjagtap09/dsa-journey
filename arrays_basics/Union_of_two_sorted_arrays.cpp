#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> unionArray(vector<int>& a, vector<int>& b) {
        int i = 0, j = 0;
        vector<int> unionArr;

        while (i < a.size() && j < b.size()) {
            if (a[i] <= b[j]) {
                if (unionArr.size() == 0 || unionArr.back() != a[i])
                    unionArr.push_back(a[i]);
                i++;
            } else {
                if (unionArr.size() == 0 || unionArr.back() != b[j])
                    unionArr.push_back(b[j]);
                j++;
            }
        }

        while (i < a.size()) {
            if (unionArr.size() == 0 || unionArr.back() != a[i])
                unionArr.push_back(a[i]);
            i++;
        }

        while (j < b.size()) {
            if (unionArr.size() == 0 || unionArr.back() != b[j])
                unionArr.push_back(b[j]);
            j++;
        }

        return unionArr;
    }
};