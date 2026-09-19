//Brute force solution
int longestSubarrayWithSumK(vector<int>& a, long long k) {

    map<long long, int> preSumMap;

    long long sum = 0;
    int maxLen = 0;

    for(int i = 0; i < a.size(); i++) {

        sum += a[i];

        // Subarray starting from index 0
        if(sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        long long rem = sum - k;

        // Have we seen this prefix sum before?
        if(preSumMap.find(rem) != preSumMap.end()) {

            int len = i - preSumMap[rem];

            maxLen = max(maxLen, len);
        }

        // Store only FIRST occurrence
        if(preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}
