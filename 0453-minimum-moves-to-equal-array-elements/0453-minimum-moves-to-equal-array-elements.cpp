class Solution {
public:
    int minMoves(vector<int>& nums) {
    int n=nums.size();
    int moves=0;
    int sum=0,minimum=INT_MAX;
    for(int i=0;i<n;i++){
        minimum=min(minimum,nums[i]);
    }
    for(int i=0;i<n;i++){
        moves+=(nums[i]-minimum);
    }
    return moves;   
    }
};