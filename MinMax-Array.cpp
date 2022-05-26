#include <iostream>
using namespace std;

pair<long long, long long> getMinMax(long long a[], int n) {
    int min = INT_MAX;
    int max = INT_MIN;
    pair<long long, long long> ans;

    sort(a, a+n);
    for (int i = 0; i < n; i++)
    {
        if(max < a[i]){
            max = a[i];
        }
        if(min > a[i]){
            min = a[i];
        }
    }
    ans.first = min;
    ans.second = max;
    return ans;
}