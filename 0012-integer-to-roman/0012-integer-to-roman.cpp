class Solution {
public:
    string intToRoman(int num) {
        string ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hr[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string th[]={"","M","MM","MMM"};

        return th[num/1000]+hr[(num%1000)/100]+tens[(num%100)/10]+ones[(num%10)];
           
    }
};