class Solution {
    static bool comp(pair<string,int>& a, pair<string,int>& b){
        if(a.second > b.second or (a.second == b.second and a.first < b.first)){
            return true;
        }
        return false;
    }
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        // hashing
        map<string, int> mp;
        
        for(auto it : words){
            mp[it]++;
        }
        
        vector<pair<string, int>> vmp;
        for(auto word: mp){
            vmp.push_back(word);
        }
        
        // sort the vector frequency 
        
        sort(vmp.begin(), vmp.end(), comp);
        
        vector<string> ans;
        
        for(int i =0; i<k; i++){
            ans.push_back(vmp[i].first);
        }
        
        return ans;
        
    }
};