#include <vector>
#include <stdint.h>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution
{
public:

    int minimumDifference(vector<int> &nums, int k)
    {
        if (k == 1)
            return 0;

        sort(nums.begin(), nums.end());
        if (nums[0] == nums[nums.size() - 1])
        {
            return 0;
        }

        uint32_t min_diff = UINT32_MAX;
        size_t last = nums.size() - k;
        uint32_t cur_diff = 0;
        for (size_t i = 0; i <= last; i++)
        {
            cur_diff = nums[i + k - 1] - nums[i];
            min_diff = min(min_diff, cur_diff);
        }

        return min_diff;
    }
};

int main()
{
    vector<int> nums;
    nums.push_back(9);
    nums.push_back(4);
    nums.push_back(1);
    nums.push_back(7);

    Solution sol;
    cout << sol.minimumDifference(nums, 2);
}