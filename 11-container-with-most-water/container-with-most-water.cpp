class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int i=0; 
        int j = n-1;
        int ans = 0;
        while(i < j){
            int w = (j -i) * min(arr[i] , arr[j]);

          ans = max(ans , w);
            if(arr[i] < arr[j]){
                i++;
            }else{
                j--;
            }
        }
        return ans;
        
    }
};