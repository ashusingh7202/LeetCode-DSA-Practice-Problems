class Solution {
public:
    int lengthOfLastWord(string s) {
    int st=0 ,end=s.length()-1;
    while (end >= 0 && s[end] == ' ') {
    end--;
}
    for(int i=0;i<end;i++){
        if(s[i]==' ')st=i+1;
    }
    int ans=end-st+1;
    return ans;  
    }
};