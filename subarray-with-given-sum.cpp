#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
       class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
      vector<int> ans;
        // Your code here
        int curr = 0;
        int idx = 0;
        for (int i = 0; i < n; i++)
        {
            curr += arr[i];
            while (curr > s && idx < i)
            {
                curr -= arr[idx];
                idx++;
            }
            if(curr == s){
                ans.push_back(idx+1);
                ans.push_back(i+1);
                return ans;
            }
        }
        if(ans.size() == 0){
            ans.push_back(-1);
            return ans;
        } 
    }
};