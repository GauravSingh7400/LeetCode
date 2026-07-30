class Solution {
public:
    bool isAnagram(string s, string t) {
    //     sort(s.begin() , s.end());
    //     sort(t.begin() , t.end());
    //    return s == t;
    if(s.length() != t.length()) return false;
    unordered_map<char, int>m;
    unordered_map<char, int>mm;
    for(int i=0; i<s.length(); i++){
        m[s[i]]++;
    }
      for(int i=0; i<t.length(); i++){
        mm[t[i]]++;
    }
   for(auto x : m){
    char ch = x.first;
    int freq = x.second;
    if(mm.find(ch) != mm.end()){
        int f = mm[ch];
        if(freq != f) return false;

    }else return false;
   }
   return true;
        
        
    }
};