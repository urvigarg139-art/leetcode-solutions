// Dutch National Flag algorithm
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size() - 1;

        int low = 0, mid = 0, high = n;

        while (mid <= high) {

            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }

            else if (nums[mid] == 1) {
                mid++;
            }

            else {  // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
