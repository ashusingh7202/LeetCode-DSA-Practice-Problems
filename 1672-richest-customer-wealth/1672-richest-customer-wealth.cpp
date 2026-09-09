#include <numeric>

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwealth = 0;

        for(int i = 0; i < accounts.size(); i++) {
            int sum = accumulate(accounts[i].begin(), accounts[i].end(), 0);
            maxwealth = max(maxwealth, sum);
        }

        return maxwealth;
    }
};