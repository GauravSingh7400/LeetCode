class Solution {
public:
    bool checkDivisibility(int n) {
        int f = n;
        int sum = 0;
         int x = 1;

            while(n > 0) {
              int d = n % 10;

              sum = sum + d;
              x = x * d;

              n = n / 10;
}
      //  int f = n;
        int total = sum + x;
        if(f % total == 0){
            return true;

        } else{
            return false;
        }
      
       
       
      
        
    }
};