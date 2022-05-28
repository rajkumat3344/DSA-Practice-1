#include <iostream>
#include <set>
using namespace std;

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int> ans;
        int count = 0;

        //Positive Elements
        for(int i=0; i<n ; i++){ //O(n)
            ans.insert(a[i]);
        }

        //Negative Elements
        for(int i=0; i<m ; i++){ //O(m)
            ans.insert(b[i]);
        }

        for(int i=0 ; i<ans.size() ; i++){
            count++;
        }
        return count;
    }
};