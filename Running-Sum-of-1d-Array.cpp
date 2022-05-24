#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i = 0, sum = 0;

        while(i < nums.size()){
            sum = nums[i] + sum;
            nums[i] = sum;
            i++;
        }
        return nums;
    }
};