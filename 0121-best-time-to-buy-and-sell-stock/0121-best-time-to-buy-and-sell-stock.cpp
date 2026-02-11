class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int bp=prices[0], profit=0;
      for(int i=1; i<prices.size(); i++){
        if(bp>prices[i]){
            bp=prices[i];
        }
        profit=max(profit, prices[i]-bp);
      }  
      return profit;
    }
};