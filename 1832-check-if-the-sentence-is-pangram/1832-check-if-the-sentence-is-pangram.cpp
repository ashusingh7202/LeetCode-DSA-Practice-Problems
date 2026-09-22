class Solution {
public:
    bool checkIfPangram(string sentence) {
    vector<bool> ans(26,0);
    for(char i : sentence){
        ans[i-'a']=1;
    }
    for(int i=0;i<ans.size();i++){
        if(ans[i]==0) return false;
    }
    return true;    
    }
};