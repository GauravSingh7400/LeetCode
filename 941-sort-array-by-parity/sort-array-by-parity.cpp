class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int j = nums.size() -1;
        int i=0;
        while(i<j){
            if(nums[i] % 2 ==  0){
              //  swap(nums[i] , nums[j]);
                i++;

            }else if(nums[j] % 2 != 0){
                j--;
            }else{
                swap(nums[i] , nums[j]);
                i++;
                j--;

            }
        }
        return nums;
        
    }
};