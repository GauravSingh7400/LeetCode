class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int j = 1;
        int i=0;
        while(i < n && j < n){
            if(nums[i] % 2 ==  0){
            i+=2;

            }else if(nums[j] % 2 != 0){
                j+=2;
            }else{
                swap(nums[i] , nums[j]);
                i+=2;
                j+=2;

            }
        }
        return nums;
        
    }
};