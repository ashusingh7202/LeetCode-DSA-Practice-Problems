class Solution {
public:
    int minMoves(vector<int>& nums) {
    int n=nums.size();
    int sum=0,minimum=INT_MAX;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        minimum=min(minimum,nums[i]);
    }
    return sum-n*minimum;    
    }
};