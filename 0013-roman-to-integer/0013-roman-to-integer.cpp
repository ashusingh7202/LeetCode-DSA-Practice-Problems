class Solution {
public:
    int numc(char c){
        if(c=='I') return 1;
        else if (c=='V') return 5;
        else if (c=='X') return 10;
        else if (c=='L') return 50;
        else if (c=='C') return 100;
        else if (c=='D') return 500;
        else if (c=='M') return 1000;
        else return 0;
    }
    int romanToInt(string s) {
    int sum=0,index=0;
    while(index<s.size()-1){
        if(numc(s[index])<numc(s[index+1])) sum-=numc(s[index]);
        else sum+=numc(s[index]);
        index++;
    }
    sum+=numc(s[s.size()-1]);
    return sum;    
    }
};