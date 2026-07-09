class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i =0;
        int j=0;
        int minlength = INT_MAX;
        int sum = 0;
        while(j < n){
            sum += nums[j];
            while(sum >= target){
                int len = j - i + 1;
                minlength = min(minlength , len);
                sum -= nums[i];
                i++;
            }
            j++;

        }
        if(minlength == INT_MAX) return 0;
        return minlength;
    }
};