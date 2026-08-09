class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans(n , 0);
        stack<int > st;
        st.push(arr[n -1]);
        ans[n -1] = 0;
     
        for(int i = n -2; i>=0; i--){
            int c = 0;
            while(st.size() > 0 && arr[i] > st.top()){
                st.pop();
                c++;
            }
            if(st.size() != 0) c++;
            ans[i] = c;
            st.push(arr[i]);

        }
        return ans;

        
    }
};