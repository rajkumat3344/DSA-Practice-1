#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans; // T(1)
        for (int i = 0; i < nums.size(); i++)//T(N)
        {
            ans.push_back(nums[nums[i]]);//T(1)
        }
        return ans;//T(1)
    }
};
//TC = N + 1 + 1 + 1 = N + 3
//We taking N by neglacting 3 [Time Complexity: O(N)]
//Space Complexity: O(1)