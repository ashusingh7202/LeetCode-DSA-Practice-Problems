class Solution {
public:
    int search(vector<int>& arr, int target) {
    int ans=-1,st=0,end=arr.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if (arr[mid]>=arr[0]){
            if(arr[st]<=target && arr[mid]>=target){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{
            if(arr[mid]<=target && arr[end]>=target){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return ans;    
    }
};