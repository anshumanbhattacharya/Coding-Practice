#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 1, 15};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    if(ans.size() == 2) {
        cout << ans[0] << " " << ans[1];
    } else {
        cout << "No pair found";
    }

    return 0;
}
