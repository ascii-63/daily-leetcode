#include <iostream>
#include <sstream>
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
    string sortSentence(string s)
    {
        vector<string> part_vec(10, "");
        uint8_t len = s.size();
        int16_t last_space = -1;

        for (uint8_t i = 0; i < len; i++)
        {
            if (s[i] >= '1' && s[i] <= '9')
            {
                uint8_t index = s[i] - '0';
                if (index >= 1 && index <= 9)
                {
                    part_vec[index] = s.substr(last_space + 1, i - last_space - 1);
                    last_space = i + 1;
                }
            }
        }

        string res;
        for (uint8_t i = 1; i < 10; i++)
        {
            if (!part_vec[i].empty())
            {
                res += part_vec[i] + " ";
            }
        }

        if (!res.empty())
        {
            res.pop_back();
        }

        return res;
    }
};

int main()
{
    return EXIT_SUCCESS;
}