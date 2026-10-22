class Solution {
public:
    string reverseWords(string s) {
    int end=s.size()-1;
    string ans="";
    string temp="";
    while(end>=0 && s[end]==' '){
        end--;
    }
    while(end>=0){
        while(end>=0 && s[end]!= ' ') {
            temp+=s[end];
            end--;}
        reverse(temp.begin(),temp.end());
        if (!ans.empty()) {
        ans += ' ';}
        ans += temp;
        temp.clear();
        while(end>=0 && s[end]==' '){
        end--;
        }
    }
    return ans;
    }
};