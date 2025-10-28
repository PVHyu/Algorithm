#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (i == 0 || nums[i] != nums[i - 1])
                nums[k++] = nums[i];
        }
        return k;
    }
};

int main() {
    vector<int> nums = {1, 1, 2, 2};
    Solution s;
    int k = s.removeDuplicates(nums);

    cout << "k = " << k << endl;
    cout << "nums after removing duplicates: ";
    for (int i = 0; i < k; ++i)
        cout << nums[i] << " ";
    cout << endl;

    return 0;
}
