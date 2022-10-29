class Solution {
    public:
    
    static bool comp(pair<int, int>p1, pair<int, int>p2){
        return p1.second > p2.second;
    }
    
    
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        
        int ans = 0;
        int l = 0;
        
        vector<pair<int,int>> seed;
        
        int n = plantTime.size();
        
        for(int i=0; i < n; i++){
            
            seed.push_back({plantTime[i], growTime[i]});
            
        }
            
        sort(seed.begin(),seed.end(),comp);
        
        for(int i=0; i < n; i++){
            l += seed[i].first;
            ans = max(ans , l + seed[i].second);
        }
        
        return ans;
    }
};

