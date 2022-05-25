#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int peak = 0;
        int bottom = arr.size() - 1;
        int mid = peak +(bottom - peak)/2;

        while(peak < bottom){
            if(arr[mid] < arr[mid+1]){
                peak = mid + 1;
            }else{
                bottom = mid;
            }
            mid = peak +(bottom - peak)/2;
        }
        return peak;
    }
};