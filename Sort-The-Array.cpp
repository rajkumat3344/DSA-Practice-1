#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    vector<int> sortArr(vector<int>arr, int n){
        
        // for(int i=0 ; i<n ; i++){
        //     for(int j=i+1 ; j<n ; j++){
        //         if(arr[i] > arr[j]){
        //             int temp = arr[i];
        //             arr[i] = arr[j];
        //             arr[j] = temp;
        //         }
        //     }
        // }

        sort(arr.begin(), arr.end());
        return arr;
    }
};