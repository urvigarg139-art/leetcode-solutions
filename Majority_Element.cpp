// Moore's Voting Algorithm
int majorityElement(vector<int>& v) {

    int cnt = 0;
    int el;

    // Find candidate
    for(int i = 0; i < v.size(); i++) {

        if(cnt == 0) {
            el = v[i];
            cnt = 1;
        }
        else if(v[i] == el) {
            cnt++;
        }
        else {
            cnt--;
        }
    }

    // Verify candidate
    int cnt1 = 0;

    for(int i = 0; i < v.size(); i++) {
        if(v[i] == el)
            cnt1++;
    }

    if(cnt1 > v.size() / 2)
        return el;

    return -1;
}
