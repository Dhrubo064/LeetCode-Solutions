class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ressum=nums[0]+nums[1]+nums[2];
        int mindif=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            int left=i+1, right=nums.size()-1;
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==target){
                    return sum;
                }
                else if(sum<target){
                    left++;
                }
                else{
                    right--;
                }
                int dif=abs(sum-target);
                if(dif<mindif){
                    ressum=sum;
                    mindif=dif;
                }
            }
        }
        return ressum;
    }
};