#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
       int requestedArray[n] = {0};
       int j = 0;

       //Positive Elements
       for(int i=0; i<n ; i++){
           if(arr[i] >= 0){
               requestedArray[j++] = arr[i];
           }
       }

       //Negative Elements
       for(int i=0; i<n ; i++){
           if(arr[i] < 0){
               requestedArray[j++] = arr[i];
           }
       }

       for(int i=0 ; i<n ; i++){
           arr[i]=requestedArray[i];
           cout << arr[i] << " ";
       }
    }
};