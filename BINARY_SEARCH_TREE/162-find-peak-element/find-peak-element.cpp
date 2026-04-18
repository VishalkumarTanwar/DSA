class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = (left + right) / 2;

            if (nums[mid] < nums[mid + 1]) {
                left = mid + 1;   // peak is on right side
            } else {
                right = mid;      // peak is on left side (including mid)
            }
        }

        return left; // index of peak element
    }
};