class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int ans = 1;
        int up = 1;
        int down = 0;
        int peak = 1;
        for(int i = 1; i<n; i++){
            if(ratings[i] > ratings[i - 1]){
                up++;
                peak = up;
                down = 0;
                ans +=up;
            }else if(ratings[i] == ratings[i -1]){
               up = 1;
                down = 0;
                peak = 1;
                ans++;

            } else {
                  down++;
                up = 1;
                ans += down;
                if(down >= peak){
                    ans++;
                }
            }
        }
        return ans++;
    }
};