class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int ans = nums[0];
        // for(int i = 0; i<nums.size(); i++){
        //     int product = nums[i];
        //     for(int j = i + 1; j<nums.size(); j++){
        //         ans = max(ans, product);
        //         product *= nums[j];
        //     }
        //     ans = max(ans, product);
        // }
        // return ans;
        
        int ans = INT_MIN;
        int maxproduct = 1;
        int minproduct = 1;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] < 0){
                swap(maxproduct, minproduct);
            }
            maxproduct = max(maxproduct*nums[i], nums[i]);
            minproduct = min(minproduct*nums[i], nums[i]);
            ans = max(maxproduct, ans);
        }
        return ans;
    }
};

