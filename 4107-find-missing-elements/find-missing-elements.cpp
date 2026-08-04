class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mi = *min_element(nums.begin() , nums.end());
          int mx = *max_element(nums.begin() , nums.end());
          vector<bool> e(mx - mi + 1 , false);
          for(int num : nums){
            e[num - mi ] = true;
          }
          
         vector<int> ans;

      
        for (int i = 0; i < e.size(); i++) {
            if (!e[i]) {
                ans.push_back(i + mi);
            }
        }

        return ans;
    }
};