import java.util.*;
class Solution {
    public int getCommon(int[] nums1, int[] nums2) {
        int n = nums1.length;
        int m = nums2.length;
        
        int min = -1;
        
            int a = 0;
            int b = 0;
            while(a<n && b<m){

                if(nums1[a] == nums2[b]){
                    min = nums1[a];
                    break;
                }
                else if(nums1[a] < nums2[b]){
                    a++;
                }
                else{
                    b++;
                }
            }

        
        return min;
    }
}