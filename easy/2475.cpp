#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <cstring>
#include <cstdint>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int unequalTriplets(vector<int> &nums)
    {
        vector<int> cnt_arr(1000, 0);
        int nums_diff = 0;
        int result = 1;

        vector<int>::iterator it;
        for (it = nums.begin(); it != nums.end(); it++)
        {
            if (cnt_arr[*it] == 0)
            {
                nums_diff += 1;
            }
            cnt_arr[*it] += 1;
        }

        if (nums_diff < 3)
        {
            return 0;
        }

        vector<int>::iterator it1;
        for (it1 = cnt_arr.begin(); it1 != cnt_arr.end(); it1++)
        {
            if (*it1 == 0)
            {
                continue;
            }
            result *= *it1;
        }
        return int(result);
    }
};