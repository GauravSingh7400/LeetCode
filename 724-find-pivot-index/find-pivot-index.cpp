class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       // int i=0; 
       // int j=0;
        int l=0;
        int f = 0;

       for(int i=0; i<nums.size(); i++){
             l += nums[i];
           // int f +=nums[i];  


        }
        
       
        for(int i=0; i<nums.size(); i++){
            int r = l - f - nums[i];
            if(f == r ){
                return i;

            }
            f += nums[i];


        }
     
     return -1;
        
    }
};