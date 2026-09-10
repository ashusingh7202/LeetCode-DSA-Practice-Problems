class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans;
        int diff=INT_MAX;
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            int st=i+1,end=n-1;
            while(st<end){
                int sum=nums[st]+nums[end]+nums[i];
                if(sum==target){
                    return target;
                }
                else if(abs(sum-target)<diff){
                    diff=abs(sum-target);
                    ans=sum;
                }
                if(sum<target){
                    
                    st++;
                }
                else{
                    
                    end--;
                }
            }
        }
        return ans;
    }
};