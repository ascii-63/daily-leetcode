#include <stdint.h>
#include <vector>

using namespace std;

class Solution
{
public:
    bool hasTrailingZeros(vector<int> &nums)
    {
        vector<int>::iterator it;
        uint32_t count = 0;
        for (it = nums.begin(); it != nums.end(); it++)
        {
            if (*it % 2 == 0)
            {
                count += 1;
            }
        }
        return (count >= 2);
    }
};