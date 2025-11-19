// TwoSum.cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp; // value -> index
    for(int i = 0; i < (int)nums.size(); ++i) {
        int need = target - nums[i];
        if(mp.find(need) != mp.end()) {
            return {mp[need], i};
        }
        mp[nums[i]] = i;
    }
    return {};
}

int main() {
    // Example input (LeetCode format normally doesn't use main, but for local run we add this)
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> res = twoSum(nums, target);
    if(!res.empty()) {
        cout << "[" << res[0] << ", " << res[1] << "]" << endl;
    }
    return 0;
}
