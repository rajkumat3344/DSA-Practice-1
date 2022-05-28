#include <iostream>
#include <set>
using namespace std;

int main(){

    int a[] = {85, 25, 1, 32, 54, 6};
    int n = sizeof(a)/sizeof(int);

    int b[] = {85, 2};
    int m = sizeof(b)/sizeof(int);

     // Your code goes here
       set<int> ans;
       int count = 0;

       //Positive Elements
       for(int i=0; i<n ; i++){
          ans.insert(a[i]);
       }

       //Negative Elements
       for(int i=0; i<m ; i++){
          ans.insert(b[i]);
       }

       for(int i=0 ; i<ans.size() ; i++){
          count++;
       }

       cout << count;
    return 0;
}