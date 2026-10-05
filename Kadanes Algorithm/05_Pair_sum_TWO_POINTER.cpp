// Return pair in  sorted array with target sum  , target = 9 , [2,7,11,15] 
// using two pointer to solve this problem so time complexity become O(n)

#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();
   
    // Move the left or right pointer based on the current sum.
    int i = 0 , j = n-1;

    while(i<j) {
        int pairSum = nums[i] + nums[j];
        if(pairSum < target) {
            i++;
        } else if(pairSum > target) {
            j--;
        } else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

// Time complexity: O(n); the input must be sorted.

int main() {
    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> ans = pairSum(nums, target);
    if(ans.empty()) {
        cout << "No pair found" << endl;
    } else {
        cout << ans[0] << " , " << ans[1] << endl;
    }
}
