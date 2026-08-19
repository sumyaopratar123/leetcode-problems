class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int r = 1, l = n - 2;

        if (n == 1) return nums[0];

        if (nums[0] != nums[1]) return nums[0];
        if (nums[n - 1] != nums[n - 2]) return nums[n - 1];

        while (r <= l) {
            int mid = r + (l - r) / 2;

            if (nums[mid - 1] != nums[mid] &&
                nums[mid + 1] != nums[mid]) {
                return nums[mid];
            }

            else if ((mid % 2 == 1 && nums[mid] == nums[mid - 1]) ||
                     (mid % 2 == 0 && nums[mid] == nums[mid + 1])) {
                r = mid + 1;
            }

            else {
                l = mid - 1;
            }
        }

        return -1;
    }
};
