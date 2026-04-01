class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;

        sort(nums.begin(), nums.end());

        int count=0, maxCount=0;

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i+1]-nums[i]==1){
                count++;
                if(count>maxCount){
                    maxCount=count;
                }
            }
            else if(nums[i+1]-nums[i]==0){
                continue;
            }
            else{
                count=0;
            }
        }

        return maxCount+1;
    }
};