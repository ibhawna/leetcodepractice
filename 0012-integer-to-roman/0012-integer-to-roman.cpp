class Solution {
public:
    string intToRoman(int num) {
        vector<int> nums = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        vector<string> roman = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        string ans;
        
        int i = nums.size()-1;  
        while(num>0){
            int quo = num/nums[i];
            int rem = num%nums[i];
            num = rem;
            while(quo--){
                ans += roman[i];
            }
            i--;
            
        }
        return ans;
   
   
    }
};