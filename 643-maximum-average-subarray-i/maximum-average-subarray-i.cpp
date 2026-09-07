class Solution {
public:
    double findMaxAverage(vector<int>& nums, int o) {
    //     int n = nums.size();
    //     int sum =0;

    //     for(int i=0; i<o; i++){
    //         sum += nums[i];

    //     }
    //     int y = sum;
    //     int c =0;
    //     for(int i=1; i<=n-o; i++){
    //         sum += - nums[i-1] + nums[i + o -1];
    //         if( sum > y){
    //             y = sum;
    //         }

    //     }
    //    float x = (float)y / o;
        
    //     return x;
    int sum = 0;
    int maxSum = INT_MIN;

   for(int i = 0; i < nums.size(); i++) {

    sum += nums[i];

    // window size k se badi ho gayi
    if(i >= o) {
        sum -= nums[i-o];
    }

    // ab window exactly k size ki hai
    if(i >= o-1) {
        maxSum = max(maxSum, sum);
    }
}

    return (double)maxSum / o;
    }
};
