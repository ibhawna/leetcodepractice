class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        // int n = nums.size();
        // for(int i =0; i<n; i++){
        //     for(int j = i+1; j<n; j++){
        //         for(int k = j+1; k<n; k++){
        //             if(nums[i] < nums[j] and nums[j] < nums[k]){
        //                 return true;
        //             }
        //         }
        //     }
        // }
        // return false;
        
        int first = INT_MAX;
        int second = INT_MAX;
        for(int i =0; i<nums.size(); i++){
            if(nums[i] <= first){
                first = nums[i];
            }
            else if(nums[i] <= second){
                second = nums[i];
            }
            else{
                return true;
            }
        }
        return false;
        
    }
};