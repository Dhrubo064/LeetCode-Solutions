class Solution {
public:
    int countPrimes(int n) {
        if(n<2) return 0;
        vector<bool>v(n, false);
        int limit=sqrt(n);
        for(int i=2; i<=limit; i++){
            if(v[i]==false){
                for(int j=i*i; j<n; j+=i){
                    v[j]=true;
                }
            }
        }
        int count=0;
        for(int i=2; i<n; i++){
            if(v[i]==false){
                count++;
            }
        }
        return count;
    }
};