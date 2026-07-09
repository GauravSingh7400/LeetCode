class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans = "";
        int i = n - 1;

        while(i >= 0) {
            while(i >= 0 && s[i] == ' ')
                i--;

            if(i < 0) break;

            int j = i;

            while(j >= 0 && s[j] != ' ')
                j--;

            if(ans != "") {
                ans = ans + " ";
            }

            string temp = "";
            for(int k = j + 1; k <= i; k++) {
                temp = temp + s[k];
            }

            ans = ans + temp;
            i = j - 1;
        }

        return ans;
    }
};
