#include <iostream>
#include <vector>
using namespace std;

void sort012(int a[], int n)
{
  int left = 0, mid = 0, right = n - 1;

    while(mid <= right){
        if(a[mid] == 0){
            int temp = a[left];
            a[left] = a[mid];
            a[mid] = temp;
            left++;
            mid++;
        }else if(a[mid] == 1){
            mid++;
        }else{
           int temp = a[mid];
            a[mid] = a[right];
            a[right] = temp;
            right--;
        }
    }
}