//Left Rotate Array by K Places
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void reverse(std ::vector<int>& arr, int start, int end) {
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    void rotateArray(std ::vector<int>& arr, int k) {
        int n = arr.size();
        k = k % n; 

        
        reverse(arr, 0, k - 1);

        
        reverse(arr, k, n - 1);

        
        reverse(arr, 0, n - 1);
    }
};
