class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int length = 0;
        int max_length = 0;

        for(int i = 0; i < n; i++) {

            if(nums[i] == 1) {
                length++;
            }
            else {
                length = 0;
            }

            max_length = max(max_length, length);
        }

        return max_length;
    }
};
