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
    vector<string> visited_points;
    int x;
    int y;
    string str_point;

    bool visited()
    {
        str_point = to_string(x) + "," + to_string(y);
        vector<string>::iterator it;
        for (it = visited_points.begin(); it != visited_points.end(); it++)
        {
            if ((*it) == str_point)
                return true;
        }
        visited_points.push_back(str_point);
        return false;
    }

    bool isPathCrossing(string path)
    {

        visited_points.push_back("0,0");

        int len = path.size();
        for (int i = 0; i < len; i++)
        {
            if (path[i] == 'N')
                y += 1;
            if (path[i] == 'S')
                y -= 1;
            if (path[i] == 'E')
                x += 1;
            if (path[i] == 'W')
                x -= 1;

            if (visited())
                return true;
        }
        return false;
    }
};

int main()
{
    return EXIT_SUCCESS;
}