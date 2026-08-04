// class Solution {
// public:
//     vector<int> findMissingElements(vector<int>& nums) {
//         int mi = *min_element(nums.begin() , nums.end());
//           int mx = *max_element(nums.begin() , nums.end());
//           vector<bool> e(mx - mi + 1 , false);
//           for(int num : nums){
//             e[num - mi ] = true;
//           }
          
//          vector<int> ans;

      
//         for (int i = 0; i < e.size(); i++) {
//             if (!e[i]) {
//                 ans.push_back(i + mi);
//             }
//         }

//         return ans;
//     }
// };
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minimum = nums[0];
        int maximum = nums[0];

        unordered_set<int> st;

        for (int n : nums) {
            st.insert(n);

            if (n < minimum)
                minimum = n;

            if (n > maximum)
                maximum = n;
        }

        vector<int> ans;

        for (int i = minimum; i <= maximum; i++) {
            if (st.count(i) == 0) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};