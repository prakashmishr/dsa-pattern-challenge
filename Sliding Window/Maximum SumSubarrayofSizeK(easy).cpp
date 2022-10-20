using namespace std;

#include <iostream>
#include <vector>

class MaxSumSubArrayOfSizeK {
 public:
  static int findMaxSumSubArray(int k, const vector<int>& arr) {
    int maxSum = 0;
    int  sum = 0;

    int j=0;
    // TODO: Write your code here
    for(int i=0; i<arr.size(); i++){
      sum+=arr[i];
      if(i>=k-1){
        maxSum = max(maxSum,sum);
        sum -= arr[j++];
      }
    }
    return maxSum;
  }
};



int main(int argc, char* argv[]) {
  cout << "Maximum sum of a subarray of size K: "
       << MaxSumSubArrayOfSizeK::findMaxSumSubArray(3, vector<int>{2, 1, 5, 1, 3, 2}) << endl;
  cout << "Maximum sum of a subarray of size K: "
       << MaxSumSubArrayOfSizeK::findMaxSumSubArray(2, vector<int>{2, 3, 4, 1, 5}) << endl;
}