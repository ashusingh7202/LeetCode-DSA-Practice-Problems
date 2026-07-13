class Solution {
public:
    int maxArea(vector<int>& height) {
    int lp=0,rp=height.size()-1;
    int ans=0;
    while(lp<rp){
        int width=rp-lp;
        int heights=min(height[lp],height[rp]);
        int  area=width*heights;
        ans=max(ans,area);
        (height[lp]<height[rp]) ? lp++ :rp--;
    }
    return ans;
}
};