// Return pair in  sorted array with target sum  , target = 9 , [2,7,11,15] 
// used bruteforce approach  and time complexity == o(n^2) 

#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();
   
    // used nested loops and brutforce approach
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

// Time complexity: O(n^2).

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
