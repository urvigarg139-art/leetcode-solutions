//Brute force 
string read(int n, vector<int> book, int target)
{
    map<int,int> mpp;

    for(int i = 0; i < n; i++) {

        int a = book[i];
        int more = target - a;

        if(mpp.find(more) != mpp.end()) {
            return "YES";
        }

        mpp[a] = i;
    }

    return "NO";
}

// Optimal approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<pair<int,int>> arr;

        for(int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        int left = 0;
        int right = arr.size() - 1;

        while(left < right) {

            int sum = arr[left].first + arr[right].first;

            if(sum == target) {
                return {arr[left].second, arr[right].second};
            }
            else if(sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return {};
    }
};
