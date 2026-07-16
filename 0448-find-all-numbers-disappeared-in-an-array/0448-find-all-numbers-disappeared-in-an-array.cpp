class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());

        for (int i = 1; i <= nums.size(); i++) {
            bool found = false;

            int st=0,end=nums.size()-1;
            while(st<=end){
                int mid=st+(end-st)/2;
                if(nums[mid]==i){
                    found=true;
                    break;
                }
                else if(nums[mid]<i){
                    st=mid+1;
                
                }
                else{
                    end=mid-1;
                }
            }

            if (!found)
                ans.push_back(i);
        }

        return ans;
    }
};