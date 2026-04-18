//Left Rotate Array by One
#include <vector>
class Solution {
public:
    void rotateArrayByOne(std ::vector<int>&arr) {
        int n =arr.size();
      int temp =arr[0];
      for (int i=1 ; i< n ;i++){
        arr[i-1] = arr[i];
      }
      arr[n-1] = temp;
    }
};