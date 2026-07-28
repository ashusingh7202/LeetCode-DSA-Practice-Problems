class Solution {
public:
    void sortColors(vector<int>& arr ){
    int start=0,end=arr.size()-1;
    int i=0;
    while(i<=end){
        if(arr[i]==2){
            swap(arr[i],arr[end]);
            end--;
        }
        else if(arr[i]==0){
            swap(arr[i],arr[start]);
            start++;
            i++;

        }
        else{
            i++;
        }
    }    
    }
};