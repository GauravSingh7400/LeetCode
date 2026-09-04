class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;

        for(int i = 0; i < n - 2; i++) {
            int c = 1;
            int j = i + 1;

            while(j < n && arr[j - 1] < arr[j]) {
                j++;
                c++;
            }

            if(j == i + 1)
                continue;

            int p = j;

            while(j < n && arr[j - 1] > arr[j]) {
                j++;
                c++;
            }

            if(j > p)
                ans = max(ans, c);
        }

        return ans;
    }
};