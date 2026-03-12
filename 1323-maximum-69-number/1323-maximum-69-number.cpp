class Solution {
public:
    int maximum69Number (int num) {
        int num2;
        string s=to_string(num);
        for(int i=0; i<s.length(); i++){
            if(s[i]=='6'){
                s[i]='9';
            }
            num2=stoi(s);
            if(num2>num){
                break;
            }
        }
        return num2;
    }
};