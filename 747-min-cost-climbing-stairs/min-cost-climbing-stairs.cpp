class Solution {
public:
int hel(vector<int>& cost , int i ,vector<int>& dp ){
    if(i == 0 || i== 1) return cost[i];
    if(dp[i] != -1) return dp[i];
    return dp[i] = cost[i] + min(hel(cost , i-1 , dp) , hel(cost , i-2 , dp)); 
}

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n , -1);
        return min(hel(cost , n-1 , dp) , hel(cost , n-2 , dp));
        
    }
};