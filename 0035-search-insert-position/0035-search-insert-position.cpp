class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int st=0,end=nums.size()-1;
    int index=nums.size();
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]==target){
            index=mid;
            break;
        }
        else if(nums[mid]<target){
            st=mid+1;
        }
        else{
            index=mid;
            end=mid-1;
        }
    }
    return index;    
    }
};