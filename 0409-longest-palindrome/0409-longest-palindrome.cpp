class Solution {
public:
    int longestPalindrome(string s) {
    vector <int> alpha(52,0);
    for(int i=0;i<s.size();i++){
        if(s[i]>='a')alpha[s[i]-'a'+26]++;
        else alpha[s[i]-'A']++;
    }
    int count=0,flag=false;
    for(int i=0;i<52;i++){
        if(alpha[i]%2==0)count+=alpha[i];
        else{
            count+=alpha[i]-1;
            flag=true;
        }
    }
    if(flag==true)return count+1;
    else return count;   
    }
};