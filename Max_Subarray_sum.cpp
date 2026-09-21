// Kadane's Algorithm
#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int sum = 0;
    int maxi = INT_MIN;

    int start = 0;
    int ansStart = 0;
    int ansEnd = 0;

    for(int i = 0; i < v.size(); i++) {

        // If starting a new subarray
        if(sum == 0) {
            start = i;
        }

        sum += v[i];

        // Found a better sum
        if(sum > maxi) {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        // Negative sum is useless
        if(sum < 0) {
            sum = 0;
        }
    }

    cout << "Maximum Sum = " << maxi << endl;

    cout << "Maximum Subarray = ";

    for(int i = ansStart; i <= ansEnd; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
