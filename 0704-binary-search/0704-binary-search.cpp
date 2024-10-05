class Solution {
public:
    int search(vector<int>& nums, int target) {
       
    int size =nums.size();
    int check = nums[size / 2];
    int mid = size / 2;
    int last = size;
    int start = 0;
        for (int i = 0; i < size; i++) {

            if (check < target) {

                start = mid;
                mid = (mid + last) / 2;
                check = nums[mid];
            } else if (check > target) {
                last = mid;
                mid = (mid + start) / 2;
                check = nums[mid];
            }
            if (check == target) {
                break;
            }
        }
        if (check != target) {
           return -1;
        } else
           return mid;
    }
};