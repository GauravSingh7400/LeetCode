class Solution {
public:
    int maxProduct(int n) {
      int f = n % 10;
      n /= 10;
      int s = n % 10;
      n /=10;
      if(s > f) swap(f , s);
      while(n){
        int a = n % 10;
        n /= 10;
        if(a > f){
            s = f;
            f = a;
        } else if(a > s){
            s = a;
        }
      }

        return f *s;
    }
};