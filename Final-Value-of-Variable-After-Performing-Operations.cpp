#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int final = 0;
        for (int x = 0; x < operations.size(); x++)
        {
            if(operations[x] == "++X" || operations[x] == "X++"){
                final = final + 1;
            }
            
            if(operations[x] == "--X" || operations[x] == "X--"){
                final = final - 1 ; 
            }
        }
        return final;
    }
};