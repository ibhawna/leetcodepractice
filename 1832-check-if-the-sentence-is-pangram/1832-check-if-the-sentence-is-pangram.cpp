class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<int> s;
        bool ans = false;
        for(auto i : sentence){
            s.insert(i);
        }
        
        return s.size() == 26;
    }
};