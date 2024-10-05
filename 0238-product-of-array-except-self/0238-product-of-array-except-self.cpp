class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size(),1);
        vector<int> suffix(nums.size(),1);
        vector<int> ans(nums.size());
       
        int a = 0;
        int mul = 1;
        for (int i = 1; i < nums.size(); i++) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
            suffix[nums.size() - i - 1] =
                suffix[nums.size() - i] * nums[nums.size()-i];
        }
        for (int i = 0; i < nums.size(); i++) {
            ans[i] = prefix[i] * suffix[i];
        }
        return ans;
    }
};