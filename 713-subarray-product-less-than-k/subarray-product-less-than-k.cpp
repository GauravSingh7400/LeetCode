class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
        int n = nums.size();
        int j = 0;
        int p = 1;
        int ans = 0;
        for(int i=0; i<n; i++){
            p *=nums[i];
            while(p >= k){
                p /= nums[j];
                j++;
            }
            ans += i - j + 1;


        }
        return ans;

        
    }
};