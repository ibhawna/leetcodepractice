class Solution {
public:
     string countAndSay(int n) {
        int total = 1;
        string res = "";
        if(n == 1)return "1";
        if(n == 2)return "11";
        string x = countAndSay(n-1);
        for(int i = 0;i<x.size();i++){
            if(x[i] == x[i+1]){
                total++;
            }
            else{
                res+=to_string(total);
                res+=x[i];
                total = 1;
            }
        }
        return res;
    }
};