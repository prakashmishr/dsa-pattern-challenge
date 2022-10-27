using namespace std;

#include <iostream>
#include <limits>
#include <vector>
#include <bits/stdc++.h>

class MinSizeSubArraySum {
 public:
  static int findMinSubArray(int S, const vector<int>& arr) {
    // TODO: Write your code here
    int minLen = INT_MAX;
   int  minLength = numeric_limits<int>::max();
    int k = 0, len=0, sum=0;
    for(int i=0; i<arr.size(); i++){
      sum += arr[i];
      // len++;
      while(sum >= S ){
        minLength = min(minLength, i+1-k);
        sum -= arr[k++];
        // len--;
        // minLen = min(len, minLen);

      }

      
    }
    return minLength == numeric_limits<int>::max() ? 0 : minLength;;
  }
};



int main(int argc, char* argv[]) {
  int result = MinSizeSubArraySum::findMinSubArray(7, vector<int>{2, 1, 5, 2, 3, 2});
  cout << "Smallest subarray length: " << result << endl;
  result = MinSizeSubArraySum::findMinSubArray(8, vector<int>{3, 4, 1, 1, 6});
  cout << "Smallest subarray length: " << result << endl;
  result = MinSizeSubArraySum::findMinSubArray(7, vector<int>{2, 1, 5, 2, 3, 2});
  cout << "Smallest subarray length: " << result << endl;
}