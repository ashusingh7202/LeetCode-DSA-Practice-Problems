class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int majority=nums[0],vote=1;
    for(int i=1;i<nums.size();i++){
        if(vote==0){
            majority=nums[i];
            vote++;
        }
        else if(majority==nums[i])vote++;
        else vote--;
    }
    return majority;   
    }
};