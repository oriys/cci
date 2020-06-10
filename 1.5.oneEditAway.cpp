#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    bool oneEditAway(string first, string second)
    {
        int _first = first.length();
        int _second = second.length();
        if (abs(_first - _second) > 1)
        {
            return false;
        }
        if (_first == _second)
        {
            if (first == second)
            {
                return true;
            }
            int diff = 0;
            for (int i = 0; i < _first; i++)
            {
                if (first[i] != second[i])
                {
                    diff++;
                }
            }
            return !(diff > 1);
        }
        else if (_first > _second)
        {
            int diff = 0;
            int idx = 0;
            for (int i = 0; i < _first; i++)
            {
                if (first[i] != second[idx])
                {
                    diff++;
                    continue;
                }
                idx++;
            }
            return !(diff > 1);
        }
        else if (_first < _second)
        {
            int diff = 0;
            int idx = 0;
            for (int i = 0; i < _second; i++)
            {
                if (first[idx] != second[i])
                {
                    diff++;
                    continue;
                }
                idx++;
            }
            return !(diff > 1);
        }
        return false;
    }
};