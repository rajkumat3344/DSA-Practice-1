#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int MaxWealth = 0;
        for(int money = 0 ; money < accounts.size() ; money++){
            int IndividualAmount = 0;
            for (int bank = 0; bank < accounts[money].size(); bank++)
            {
                IndividualAmount += accounts[money][bank];
            }
            if(MaxWealth < IndividualAmount){
                MaxWealth = IndividualAmount;
            }
        }
        return MaxWealth;
    }
};