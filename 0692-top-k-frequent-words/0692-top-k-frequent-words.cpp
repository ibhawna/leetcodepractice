struct comp {
    bool operator()(pair<int, string> &str1, pair<int, string> &str2) {
        if(str1.first < str2.first)
            return true;
        if(str1.first > str2.first)
            return false;
        if(str1.second.compare(str2.second) > 0)
            return true;
        return false;
    }
};
class Solution {
     
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        // hashing and priority queue
        
        // map
        map<string, int> mp;
        for(auto it : words){
            mp[it]++;
        }
        
        // pq
        priority_queue<pair<int, string>, vector<pair<int, string>>, comp> pq;      
        for(auto &word: mp){
            pq.push({word.second, word.first});
        }
        
        // ans
        vector<string> ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        
        return ans;
        
    }
};




// class Solution {
//     static bool comp(pair<string,int>& a, pair<string,int>& b){
//         if(a.second > b.second or (a.second == b.second and a.first < b.first)){
//             return true;
//         }
//         return false;
//     }
// public:
//     vector<string> topKFrequent(vector<string>& words, int k) {
        
//         // hashing
//         map<string, int> mp;
        
//         for(auto it : words){
//             mp[it]++;
//         }
        
//         vector<pair<string, int>> vmp;
//         for(auto word: mp){
//             vmp.push_back(word);
//         }
        
//         // sort the vector frequency 
        
//         sort(vmp.begin(), vmp.end(), comp);
        
//         vector<string> ans;
        
//         for(int i =0; i<k; i++){
//             ans.push_back(vmp[i].first);
//         }
        
//         return ans;
        
//     }
// };