class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        // int ans = 0;
        // int n = nums.size();
        // for(int i =0; i<n; i++){
        //     if(nums[i] < k){
        //         ans++;
        //     }
        //     int product = nums[i];
        //     for(int j = i+1; j<n; j++){
        //         product *= nums[j];
        //         if(product < k){
        //             ans++;
        //         }
        //         else{
        //             break;
        //         }
        //     }
        // }
        // return ans;
        if(k<=1){
            return 0;
        }
        int ans = 0;
        int product = 1;
        int left = 0;
        int n = nums.size();
        for(int i = 0; i <n; i++){
            product *= nums[i];
            while(left < n and product >= k){
                product /= nums[left];
                left++;
            }
            ans += i - left + 1;
        }
        return ans;
        
    }
};