class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int , int > mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;;
        }
         unordered_set<int> s;
         for(auto x : mp){
            int f = x.second;
            if(s.find(f) != s.end()) return false;
            else s.insert(f);
         }
         return true;
        
    }
};