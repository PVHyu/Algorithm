#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // vị trí ghi tiếp theo
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main() {
    Solution s;
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int k = s.removeElement(nums, val);

    cout << "So phan tu con lai: " << k << endl;
    cout << "Mang sau khi xoa: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
