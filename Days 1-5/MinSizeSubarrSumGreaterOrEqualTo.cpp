class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0, j=0;
        if(nums[0]==target) return 1;
        int sum = 0;
        int minSum = INT_MAX;
        
        while(j<nums.size()){
            sum += nums[j];
            
            while(sum>=target){
                minSum = min(minSum,j+1-i);
                sum -= nums[i];
                i++;
            }
            j++;
        }
        return (minSum==INT_MAX)?0:minSum;
    }
};
