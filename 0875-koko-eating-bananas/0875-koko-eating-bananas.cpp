class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    sort(piles.begin(),piles.end());
    int n=piles.size();
    int st=1,end=piles[n-1],mid,ans;
    while(st<=end){
        mid=st+(end-st)/2;
        long long time=0;
        for(int i=0;i<n;i++){
            time += ceil((double)piles[i] / mid);

        }
        if(time>h){
            st=mid+1;
        }
        else{
            ans=mid;
            end=mid-1;
        }
    }
    return ans;    
    }
};