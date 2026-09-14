class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count = 0;
        int maxx = 0;
        int f =0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i] == 0){
                count++;

            }
             if(count > k){
                if(nums[f] == 0)
                    count--;
                f++;
            }

            maxx = max(maxx, i - f + 1);
        }
        return maxx;
    }
};




















