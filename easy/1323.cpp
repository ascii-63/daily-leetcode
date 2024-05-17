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
    int maximum69Number(int num)
    {
        if (num == 9 || num == 99 || num == 999 || num == 9999)
            return num;

        if (num < 9)
            return 9;

        if (num < 90)
            return (num + 30);

        if (num == 96)
            return 99;

        if (num < 900)
            return (num+300);
        
        if (num < 990)
            return (num+30);

        if (num == 996)
            return 999;

        if (num < 9000)
            return (num + 3000);

        if (num < 9900)
            return (num + 300);

        if (num < 9990)
            return (num + 30);

        return 9999;
    }
};

int main()
{
    return EXIT_SUCCESS;
}