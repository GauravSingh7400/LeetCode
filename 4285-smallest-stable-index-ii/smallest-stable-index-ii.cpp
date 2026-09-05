class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int ans =INT_MIN;
        int s = INT_MAX;
       
      vector<int>minn(n);
         for(int i=n -1; i>=0; i--){
            s = min(s , nums[i]);
            minn[i] =s;
           
        }
         for(int i=0; i<n; i++){
            ans = max(ans , nums[i]);
            if( ans - minn[i]<= k){
            return i;
        }
    }
        
        
        return -1;

        
    }
};