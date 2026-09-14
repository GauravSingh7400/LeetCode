// class Solution {
// public:
//     int characterReplacement(string s, int k) {
//         int left = 0;
//         int count = 0;
//         int maxFreq = 0;
//         int ans = 0;
//          map<char, int> mp;
        
//         for(int i=0; i<s.size(); i++){
//             mp[s[i]]++;
//             // if(s[i] == 'A'){
//             //     count++;
//             // }
//               maxFreq = max(maxFreq, mp[s[i]]);
//              if ((i - left + 1) - maxFreq > k) {
//                   mp[s[left]]--;
//                   left++;
                  

//              }
//             ans = max(ans, i - left + 1);

//         }
//         return ans;
//     }
// };
class Solution {
public:
    int characterReplacement(string s, int k) {
        int ret = 0;
        for (char c = 'A'; c <= 'Z'; c++) {
            int no_c = 0;
            int st = 0;
            for (int en = 0; en < s.size(); en++) {
                if (s[en] != c) no_c++;
                if(no_c > k) {
                    if (s[st] != c) no_c--;
                    st++;
                }
                ret = max(ret, en-st+1);
            }
        }
        return ret;
    }
};