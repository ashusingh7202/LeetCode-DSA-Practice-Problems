class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
    int xorall=0;
    for(int i=0;i<nums.size();i++){
        xorall^=nums[i];
    
    }
    int rightset = (unsigned int)xorall & -(unsigned int)xorall;
    int x=0,y=0;
    for(int i=0;i<nums.size();i++){
        if(rightset &nums[i]){
            x^=nums[i];
        }
        else{
            y^=nums[i];
        }
    }
    return {x,y};    
    }
};