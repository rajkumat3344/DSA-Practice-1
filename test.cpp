#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6};
    int n = sizeof(arr)/sizeof(int);

     // Your code goes here
       int requestedArray[8] = {0};
       int ni = sizeof(arr)/sizeof(int);
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

       for(int i=0 ; i<ni ; i++){
           arr[i]=requestedArray[i];
           cout << arr[i] << " ";
       }

    return 0;
}