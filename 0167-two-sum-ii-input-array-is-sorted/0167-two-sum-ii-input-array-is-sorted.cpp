class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int st=0,end=nums.size()-1;
    while(st<=end){
        int s=nums[st]+nums[end];
        if(s==target){
            return{st+1,end+1};
        }
        else if(s<target)st++;
        else end--;
    }
    return {};    
    }
    
};