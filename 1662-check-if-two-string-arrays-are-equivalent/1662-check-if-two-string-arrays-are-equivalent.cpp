class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        bool same = false;
        string s1, s2;
        for(const auto &i :  word1) 
            s1 +=i;
        for(const auto &i :  word2) 
            s2 +=i;
        if(s1==s2){
            same = true;
        }
        return same;
        
        
        
    }
};