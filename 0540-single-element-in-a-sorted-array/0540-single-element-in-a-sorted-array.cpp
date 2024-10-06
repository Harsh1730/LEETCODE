class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if(nums.size()==1)
            {
                return nums[start];
            }
            if (mid == 0 && nums[0] != nums[1]) {
                return nums[mid];

            }
            else if(mid==nums.size()-1&&nums[mid]!=nums[mid-1]){
                return nums[mid];
            
            }
            mid = start + (end - start) / 2;
            if (mid % 2 == 0) {
                if (nums[mid] == nums[mid - 1]) {
                    end = mid - 1;
                } else if (nums[mid] == nums[mid + 1]) {
                    start = mid + 1;
                } else
                    return nums[mid];
            } else {
                if (nums[mid] == nums[mid - 1]) {
                    start = mid + 1;
                } else if (nums[mid] == nums[mid + 1]) {
                    end = mid - 1;

                } else
                    return nums[mid];
            }
        }
        return -1;
    }
};