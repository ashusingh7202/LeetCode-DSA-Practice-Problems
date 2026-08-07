class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    int st=0,end=0,mid,ans,n=piles.size();
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=piles[i];
        end=max(end,piles[i]);
    }
    st=sum/h;
    if(!st) st=1;

    while(st<=end){
        mid=st+(end-st)/2;
        int time=0;
        for(int i=0;i<n;i++){
            time += piles[i] / mid;
            if(piles[i]%mid)time++; 

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