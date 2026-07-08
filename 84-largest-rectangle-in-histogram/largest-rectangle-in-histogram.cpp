class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int nsp[n];
        stack<int> st;
         nsp[n-1] = n;
        st.push(n-1);
        for(int i = n - 2; i>=0; i--){
            while(st.size() > 0 && heights[st.top()] >= heights[i] ) st.pop();
            if(st.size()  == 0) nsp[i] = n;
            else nsp[i] = st.top();
            st.push(i);
        }
        int psi[n];
        stack<int>stt;
         psi[0] = -1;
        stt.push(0);
        for(int i =1; i<n; i++){
            while(stt.size() > 0 && heights[stt.top()] >= heights[i] ) stt.pop();
            if(stt.size()  == 0) psi[i] = -1;
            else psi[i] = stt.top();
            stt.push(i);
        }
        int maxA = 0;
        for(int i=0; i<n; i++){
            int h = heights[i];
            int w = nsp[i] - psi[i] - 1;
            int aa = h * w;
            maxA = max(maxA , aa);
        }
        return maxA;
    }
};