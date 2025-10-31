#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] >= target)
                return i;
        }
        return nums.size(); // nếu target lớn hơn tất cả phần tử
    }
};

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    Solution sol;
    int result = sol.searchInsert(nums, target);

    cout << "Output: " << result << endl;
    return 0;
}
