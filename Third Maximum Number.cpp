class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long long firstmax = LLONG_MIN;
        long long secondmax = LLONG_MIN;
        long long thirdmax = LLONG_MIN;

        // Find the maximum
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > firstmax) {
                firstmax = nums[i];
            }
        }

        // Find the second maximum
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > secondmax && nums[i] < firstmax) {
                secondmax = nums[i];
            }
        }

        // Find the third maximum
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > thirdmax &&
                nums[i] < firstmax &&
                nums[i] < secondmax) {

                thirdmax = nums[i];
            }
        }

        // If third maximum doesn't exist,
        // return the maximum
        if (thirdmax == LLONG_MIN) {
            return firstmax;
        }

        return thirdmax;
    }
};
