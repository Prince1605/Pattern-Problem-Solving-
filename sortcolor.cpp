#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0, count1 = 0, count2 = 0;
        int n = nums.size();

        // Count number of 0s, 1s, and 2s
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) count0++;
            else if (nums[i] == 1) count1++;
            else count2++;
        }

        // Overwrite nums array with sorted values
        int idx = 0;
        for (int i = 0; i < count0; i++) {
            nums[idx++] = 0;
        }
        for (int i = 0; i < count1; i++) {
            nums[idx++] = 1;
        }
        for (int i = 0; i < count2; i++) {
            nums[idx++] = 2;
        }
    }
};

int main() {
    Solution sol;

    // Sample input
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    // Sorting the colors
    sol.sortColors(nums);

    // Output result
    cout << "Sorted Colors: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
