class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res="";
        while(columnNumber>0){
            columnNumber--;
            char letter='A'+(columnNumber%26);
            res=letter+res;
            columnNumber/=26;
        }
        return res;
    }
};