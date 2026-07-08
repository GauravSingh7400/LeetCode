class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        vector<int> st;

        for (int x : ast) {
            bool destroyed = false;

            while (!st.empty() && x < 0 && st.back() > 0) {
                if (st.back() < -x) {
                    st.pop_back();
                } else if (st.back() == -x) {
                    st.pop_back();
                    destroyed = true;
                    break;
                } else {
                    destroyed = true;
                    break;
                }
            }

            if (!destroyed) {
                st.push_back(x);
            }
        }

        return st;
    }
};